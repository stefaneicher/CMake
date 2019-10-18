#!/usr/bin/env bash
rm -r cmake-build
mkdir cmake-build
cd cmake-build
../bootstrap
make
