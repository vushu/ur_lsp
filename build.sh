#!/bin/bash
# File              : build.sh
# Author            : Vushu <danvu.hustle@gmail.com>
# Date              : 11.02.2020
# Last Modified Date: 11.02.2020
# Last Modified By  : Vushu <danvu.hustle@gmail.com>

mkdir -p build
cd build
cmake .. && make && ./ur_lsp
cd -
