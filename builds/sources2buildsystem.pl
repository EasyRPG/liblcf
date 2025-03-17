#!/bin/perl

# sources2buildsystem.pl - maintainer utility script to keep the
# source/header file list for our build systems organized and up-to-date.
# by carstene1ns 2018-2025, released under the MIT license

use strict;
use warnings;
use File::Find;

print "Searching for source/header files and adding them to the buildsystems...\n";

# process source directory
my @files;
find(\&wanted, "src");
@files = sort @files;

# put generated and third party files after others
my @generated = grep(/\/generated\//, @files);
my @third_party = grep(/\/third_party\//, @files);
my @others = grep(!/\/generated|third_party\//, @files);
@files = (@others, @generated, @third_party);

# split source and headers
my $regex = '(\.cpp|_flags\.h|fwd_.*\.h|src\/[^\/]*\.h)$';
my @sources = grep( /$regex/, @files);
my @headers = grep(!/$regex/, @files);

# cmake
my $sources_formatted = format_files(0, @sources);
my $headers_formatted = format_files(0, @headers);
my $buildsystem_file = "CMakeLists.txt";
my $data = slurp($buildsystem_file);
$data =~ s/(?<=^set\(LCF_SOURCES\n).*?(?=\n\)$)/$sources_formatted/sm;
$data =~ s/(?<=^set\(LCF_HEADERS\n).*?(?=\n\)$)/$headers_formatted/sm;
burp($buildsystem_file, $data);

# autotools (needs split)
$sources_formatted = format_files(1, @sources);
$headers_formatted = format_files(1, grep(!/\/(ldb|lmt|lmu|lsd|rpg|third_party)\//, @headers));
$buildsystem_file = "Makefile.am";
$data = slurp($buildsystem_file);
$data =~ s/(?<=^liblcf_la_SOURCES = \\\n).*?\.cpp$/$sources_formatted/sm;
$data =~ s/(?<=^lcfinclude_HEADERS = \\\n).*?\.h$/$headers_formatted/sm;
foreach ("ldb", "lmt", "lmu", "lsd", "rpg", "third_party") {
	my $g = $_;
	my $h = format_files(1, grep(/\/$g\//, @headers));
	$g =~ tr/_//d; # remove underscore
	$data =~ s/(?<=^lcf${g}include_HEADERS = \\\n).*?\.h$/$h/sm;
}
burp($buildsystem_file, $data);

print "done.\n";

# - - - - - -

sub wanted {
	return unless -f;
	return unless /\.(cpp|h)$/;
	return if /inireader/;

	push @files, $File::Find::name;
}

sub format_files {
	my $needs_slash = shift;
	my $formatted;
	foreach my $f (@_) {
		my $is_last = (\$f == \$_[-1]);
		$formatted .= "\t$f";
		$formatted .= " \\" if (! $is_last && $needs_slash);
		$formatted .= "\n" if (! $is_last)
	}
	return $formatted;
}

sub slurp {
	my $file = shift;
	open my $fh, '<:encoding(UTF-8)', $file or die "Could not open file $file for reading!";
	local $/ = undef;
	my $cont = <$fh>;
	close $fh;
	return $cont;
}

sub burp {
	my $file = shift;
	my $data = shift;
	open my $fh, '>:encoding(UTF-8)', $file or die "Could not open file $file for writing!";
	print $fh $data;
	close $fh;
}
