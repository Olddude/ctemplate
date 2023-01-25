#!/usr/bin/env sh

echo OS: $OSTYPE

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
echo "linux-gnu"
elif [[ "$OSTYPE" == "darwin"* ]]; then
echo "Mac OSX"
brew update

brew upgrade

brew install \
    ossp-uuid
elif [[ "$OSTYPE" == "cygwin" ]]; then
echo "POSIX compatibility layer and Linux environment emulation for Windows"
elif [[ "$OSTYPE" == "msys" ]]; then
echo "Lightweight shell and GNU utilities compiled for Windows (part of MinGW)"
elif [[ "$OSTYPE" == "win32" ]]; then
echo "I'm not sure this can happen."
elif [[ "$OSTYPE" == "freebsd"* ]]; then
echo "# ..."
else
echo "# Unknown."
# update
apk update

# upgrade
apk upgrade

# add tools
apk add \
    clang \
    gcc \
    g++ \
    cmake \
    make \
    binutils

# add libraries
apk add \
    libc-dev \
    curl-dev \
    libuuid
fi
