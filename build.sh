#!/usr/bin/env bash
set -euo pipefail

build_type=${1:-Release}

cmake -S . -B build -DCMAKE_BUILD_TYPE="$build_type"
cmake --build build
