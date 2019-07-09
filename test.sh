loc=`pwd`
echo $loc

for file in /usr/local/bin/sqlite3/lib/*so ;do
    echo $file
    echo ${file##*/lib}
    echo ${file%.so}
done
