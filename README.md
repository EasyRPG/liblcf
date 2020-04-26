# liblcf

liblcf is a library to handle RPG Maker 2000 and 2003 game data.
It can read and write LCF and XML files.

liblcf is part of the EasyRPG Project. More information is available
at the project website: https://easyrpg.org/


## Documentation

Documentation is available at the documentation wiki: https://wiki.easyrpg.org


## Requirements

- [Expat] for XML reading support.
- [ICU] for character encoding detection and conversion (recommended).


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

    tar xf liblcf-0.6.2.tar.xz # unpack the tarball
    cd liblcf-0.6.2            # enter in the package directory
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

https://wiki.easyrpg.org/development/compiling/liblcf/autotools


### CMake method:

Building requirements:

- pkg-config (Not on Windows)
- CMake

Step-by-step instructions:

    tar xf liblcf-0.6.2.tar.xz            # unpack the tarball
    cd liblcf-0.6.2                       # enter in the package directory
    cmake . -DCMAKE_BUILD_TYPE=Release    # configure project
    cmake --build .                       # compile the library
    sudo cmake --build . --target install # install system-wide

Read more detailed instructions at:

https://wiki.easyrpg.org/development/compiling/liblcf/cmake

CMake is the only supported way to build liblcf for Windows. All dependencies
must be installed with [vcpkg].


## Bug reporting

Available options:

* File an issue at https://github.com/EasyRPG/liblcf/issues
* Open a thread at https://community.easyrpg.org/
* Chat with us via IRC: [#easyrpg at irc.freenode.net]


## License

liblcf is Free/Libre Open Source Software, released under the MIT License.
See the file [COPYING] for copying conditions.

### 3rd party software

liblcf code includes a copy of [inih] under New BSD license.
See the source code comment headers for license details.


[Expat]: https://libexpat.github.io
[ICU]: http://icu-project.org
[vcpkg]: https://github.com/Microsoft/vcpkg
[#easyrpg at irc.freenode.net]: https://kiwiirc.com/nextclient/#ircs://irc.freenode.net/#easyrpg?nick=rpgguest??
[COPYING]: COPYING
[inih]: https://github.com/benhoyt/inih
