#!/bin/sh

ROOT=$(pwd)

cd ranmath
git pull
cd $ROOT

git submodule sync
git submodule update
