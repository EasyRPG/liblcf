# liblcf

liblcf is a library to handle RPG Maker 2000 and 2003 game data.
It can read and write LCF and XML files.

liblcf is part of the EasyRPG Project. More information is available
at the project website: https://easyrpg.org/


## Documentation

Documentation is available at the documentation wiki: https://wiki.easyrpg.org


## Requirements

Expat for XML reading support.
ICU for character encoding detection and conversion.


## Source code

liblcf development is hosted by GitHub, project files are available
in this git repository:

https://github.com/EasyRPG/liblcf

Released versions are also available at our Download Archive:

https://easyrpg.org/downloads/


## Building

### Autotools Makefile method:

Building requirements:

- pkg-config
- GNU make

Step-by-step instructions:

    tar xf liblcf-0.5.2.tar.xz # unpack the tarball
    cd liblcf-0.5.2            # enter in the package directory
    ./configure --prefix /usr  # find libraries, set options
    make                       # compile the library
    sudo make install          # install system-wide

Additional building requirements when using the source tree (git):

- autoconf >= 2.69
- automake >= 1.11.4
- libtool

To generate the "configure" script, run before following the above section:

    autoreconf -i

Read more detailed instructions at:

* https://wiki.easyrpg.org/development/compiling/liblcf/autotools
* https://wiki.easyrpg.org/development/compiling/liblcf/cmake


## Bug reporting

Available options:

* File an issue at https://github.com/EasyRPG/liblcf/issues
* Open a thread at https://community.easyrpg.org/
* Chat with us via IRC: #easyrpg at irc.freenode.net


## License

liblcf is Free/Libre Open Source Software, released under the MIT License.
See the file COPYING for copying conditions.

### 3rd party software

liblcf code includes a copy of Boost Preprocessor Cat and Stringize
(Boost Software License 1.0) and a copy of inih (New BSD license).
See the source code comment headers for license details.
