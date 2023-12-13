#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Bamiyor/alx-low_level_programming/master/0x018-dynamic_libraries/libtest.so
export LD_PRELOAD="$PWD/ ../libtest.so"
