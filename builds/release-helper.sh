#!/bin/bash

# release-helper.sh - maintainer utility script to change
# the library version and update all copyright dates
# by carstene1ns 2021, released under the MIT license

set -e

year=$(date +%Y)
version=$1
verbose=${2:-quiet}

# helpers
reset="\e[0m"
red="\e[31m"
yellow="\e[33m"
blue="\e[36m"
bold="\e[1m"
function print_file() {
  if [ $verbose == "verbose" ]; then
    echo -e "$yellow  $file:$reset"
  else
    echo -e "$yellow  $file$reset"
  fi
}

function print_verbose() {
  if [ $verbose == "verbose" ]; then
    echo -ne "$blue"
    grep "$1" $2
    echo -e "$reset"
  fi
}

if [[ ! -z $version ]]; then

  if [[ ! $version =~ ^[0-9](\.[0-9]){1,3}$ ]]; then

    echo "Invalid version argument. Only digits and dots allowed."
    echo "Example: 0.8 or 0.7.0.1"
    exit 1

  fi

  echo "Updating Version in:"

  file=CMakeLists.txt
  print_file
  sed -i "/liblcf VERSION/,1 s/[0-9]\(.[0-9]\)\{1,2\}/$version/" $file
  print_verbose 'liblcf VERSION' $file

  file=configure.ac
  print_file
  sed -i "/AC_INIT/,1 s/[0-9]\(.[0-9]\)\{1,2\}/$version/" $file
  print_verbose 'AC_INIT' $file

  file=README.md
  print_file
  sed -i "s/\(liblcf-\)[0-9]\(.[0-9]\)\{1,2\}/\1$version/g" $file
  print_verbose 'liblcf-' $file
else

  echo "No new version argument, only updating copyright years!"

fi

echo "Updating License…"

file=COPYING
print_file
sed -i "1,1 s/2014-2[0-9][0-9][0-9]/2014-$year/" $file
print_verbose '2014-' $file

echo -e "$(
cat << EOM

${red}Please check ${bold}README.md${reset}${red} file for whitespace problems.${reset}

If everything is ready and committed, use these commands to publish the git tag:
$ git tag -a (-s) $version -m "Codename \"fancy codename\""
$ git push (-n) --tags upstream
EOM
)"
