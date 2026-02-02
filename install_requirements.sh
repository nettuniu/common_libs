#!/usr/bin/env bash
set -euo pipefail

missing=0

need_cmd() {
  if ! command -v "$1" >/dev/null 2>&1; then
    echo "missing: $1"
    missing=1
  fi
}

need_cmd cmake
need_cmd g++
need_cmd make

if [ "$missing" -ne 0 ]; then
  echo "Install the missing tools with your system package manager." >&2
  exit 1
fi

echo "All required tools are available."
