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