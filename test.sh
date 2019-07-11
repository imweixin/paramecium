loc=`pwd`
echo $loc

for file in /usr/local/bin/sqlite3/lib/*so ;do
    echo $file
    echo ${file##*/lib}
    echo ${file%.so}
done

# for file in lib/**/*.c src/*.c src/**/*.c;do
#     echo $file
# done

# for file in $(find src lib -maxdepth 2 -name '*.c' -or -name '*.h') ;do
#     echo $file
# done

for file in $(find lib -maxdepth 2 -name '*.c') ;do
    parentDir=$(dirname "$file")
    parentDir=${parentDir##*/}
    if [[ $file == */$parentDir.c ]] ;then
        source_str="$source_str $file"
    else
        continue
    fi
done
echo $source_str