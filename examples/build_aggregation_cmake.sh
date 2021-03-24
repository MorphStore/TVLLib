#!/bin/bash

if [[ ! "$(dirname $0)" == "." ]]; then
  echo "Please run this script inside the examples folder. Exiting."
  exit 1
fi


cd ..
mkdir -p build
cmake -E chdir build/ cmake ../
make -C build/ VERBOSE=1 all

cd examples
