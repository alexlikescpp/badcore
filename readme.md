Badcore: A minimal set of UNIX® coreutils (see: https://en.wikipedia.org/wiki/List_of_POSIX_commands for reference) that as of writing is less than 10 commands, but will (hopefully) grow to be at least a semi-useable system. 
The purpose of creating Badcore is primarily for practicing and learning C++, but also just for fun.

# build
To build badcore, simply run ``sh build.sh`` in a unix/unix-like terminal or terminal emulator. You need clang installed.

# useage
for cp and mv, it doesn't support just listing the target such as ``cp cp.cpp [dir]``, it only supports for example ``cp cp.cpp [dir]/cp.cpp``
