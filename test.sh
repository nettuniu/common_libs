#!/usr/bin/env bash
set -euo pipefail

cmake -S . -B build -DCMAKE_BUILD_TYPE=${1:-Release}
cmake --build build
ctest --test-dir build --output-on-failure
