#!/bin/bash
# make.sh
CC=clang
CXX=clang++
COMPILER_PARA="-g -Wall -std=c17 -Wno-unused-function"
SQLITE_HOME=/usr/local/bin/sqlite3

loc=`pwd`
# SCRIPTPATH="$( cd "$(dirname "$0")" ; pwd -P )"
# Define library
lib_path=("$SQLITE_HOME/lib")
# Define include path
include_path=("$loc/src" "$loc/lib" "$SQLITE_HOME/include")
# Define source files path
src_path=("$loc/src")
# Define test files path
test_path=("$loc/test")

# Get project source files
for i in ${src_path[*]} ;do
    for file in $(find $i -maxdepth 2 -name '*.c') ;do
        if [[ $1 == "test" ]] && [[ $i == */src ]] && [[ $file == */main.c ]] ;then
            continue
        fi
        source_str="$source_str $file"
    done
done

# Get library source files
for file in $(find lib -maxdepth 2 -name '*.c') ;do
    parentDir=$(dirname "$file")
    parentDir=${parentDir##*/}
    if [[ $file != *test.c ]];then
        source_str="$source_str $file"
    else
        continue
    fi    
done

# Get include diretories
for i in ${include_path[*]} ;do
    include_str="$include_str -I $i"
done

# Get linker file
for i in ${lib_path[*]} ;do
    lib_str="$lib_str -L$i"
    for file in $i/*.so ;do
        libname="${file##*/lib}"
        libname="${libname%%.so}"
        linker_str="$linker_str -Wl,-rpath,$i -l$libname"
    done
done

# If build or run then compile source file
if [ -z "$1" ] || [[ $1 =~ ^(build|run)$ ]] ;then
    $CC $source_str -o $loc/bin/main $include_str $lib_str $linker_str $COMPILER_PARA
fi

# if run then run main ,if test then run test
if [ -z "$1" ] || [ "$1" == "run" ] ;then
    $loc/bin/main
elif [ "$1" == "test" ] ;then
    # Do test
    for i in ${test_path[*]} ;do
        for file in $i/*c ;do
            fullname="${file##*/}"
            filename="${fullname%.*}"
            extension="${fullname##*.}"
            # Compile test file
            $CC $source_str $file -o $loc/bin/$filename $include_str $lib_str $linker_str $COMPILER_PARA
            # Run test
            $loc/bin/$filename
        done
    done
fi
