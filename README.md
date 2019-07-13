# paramecium
Everything is based on paramecium

## Prerequisites
```bash
# Getting start
git submodule add https://github.com/DaveGamble/cJSON.git lib/cjson
git submodule add https://github.com/redis/hiredis.git lib/hiredis
# Clone from remote
git clone https://github.com/imweixin/paramecium.git
git submodule init
git submodule update --remote --merge # To update submodules
# Or clone with
git clone --recurse-submodules https://github.com/imweixin/paramecium.git
```

## Libraries
```bash
# Get cUrl
curl https://curl.haxx.se/download/curl-7.65.1.tar.gz -o curl-7.65.1.tar.gz
mkdir curl && tar -xzf curl-7.65.1.tar.gz -C curl --strip-components=1
./configure --prefix=$HOME --with-ssl && make && make test && make install
# Get Xz-Utils
curl https://jaist.dl.sourceforge.net/project/lzmautils/xz-5.2.4.tar.gz -o xz-5.2.4.tar.gz
mkdir xz && tar -xzf xz-5.2.4.tar.gz -C xz --strip-components=1
./configure --prefix=$HOME && make && make test && make install
```