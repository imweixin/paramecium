#!/bin/bash
# make.sh
CC=clang
CXX=clang++

loc=`pwd`
# SCRIPTPATH="$( cd "$(dirname "$0")" ; pwd -P )"
# Define library
lib=("$loc")
# Define source files
src=("$loc/lib" "$loc/src")
# Define test files
test=("$loc/test")

# Get source files
for i in ${src[*]} ;do
    if [[ $1 == "test" ]] && [[ $i == *src ]];then
        continue
    fi
    for file in "$i/*.c" ;do
        source_str="$source_str $file"
    done    
done

# Get include diretories
for i in ${lib[*]} ;do
    include_str=" -I $i"
done

# If build or run then compile source file
if [ -z "$1" ] || [[ $1 =~ ^(build|run)$ ]] ;then
    $CC $source_str -o "$loc/bin/main" $include_str -g -Wall -std=c17
fi

# if run then run main ,if test then run test
if [ -z "$1" ] || [ "$1" == "run" ] ;then
    $loc/bin/main
elif [ "$1" == "test" ] ;then
    # Do test
    for i in ${test[*]} ;do
        for file in "$i/*c" ;do            
            tmp=`echo $file`
            fullname="${tmp##*/}"
            filename="${fullname%.*}"
            extension="${fullname##*.}"
            # Compile test file
            $CC $source_str $tmp -o "$loc/bin/$filename" $include_str -g -Wall -std=c17
            # Run test
            $loc/bin/$filename
        done
    done
fi
