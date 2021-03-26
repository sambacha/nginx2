#!/bin/bash
wget https://github.com/cubicdaiya/nginx-build/releases/download/v0.11.13/nginx-build-linux-amd64-0.11.13.tar.gz
tar xzvf nginx-build-linux-amd64-0.11.13.tar.gz
rm nginx-build-linux-amd64-0.11.13.tar.gz
chmod +x nginx-build
./nginx-build -d work -pcre -zlib -openssl
