# DS Libraries Guide

## Overview
This repository provides a compact set of larger `ds_*` libraries for reuse across many applications. The design follows Lakos-style layering: lower layers do not depend on heavier layers, and dependencies form an acyclic graph.

## Layering
1) Foundation: `ds_base`
2) Core utilities: `ds_core`, `ds_memory`, `ds_io`
3) Domain utilities: `ds_math`, `ds_data`, `ds_system`
4) Infrastructure: `ds_net`
5) GUI bridging: `ds_gui_bridge`
6) Application helpers: `ds_app`

Allowed dependencies (examples):
- `ds_core` depends on `ds_base`
- `ds_memory` depends on `ds_base`
- `ds_math` depends on `ds_base` and `ds_core`
- `ds_data` depends on `ds_core` and `ds_io`
- `ds_system` depends on `ds_base` and `ds_core`
- `ds_io` depends on `ds_base` and `ds_core`
- `ds_net` depends on `ds_base`, `ds_core`, `ds_io`
- `ds_gui_bridge` depends on `ds_base` and `ds_core`
- `ds_app` depends on `ds_core` and higher libs as needed

## Dependency Rules
- No cycles between libraries or components.
- No GUI dependencies in lower layers.
- External libraries only when necessary; each must be permissive-license and listed in `third_party/`.

## Build
- Configure and build using `build.sh`.
- Tests are run using `test.sh`.

## Documentation
Each library has a dedicated guide in `doc/` (e.g. `doc/ds_core.md`).

## Tests and Examples
Tests live under `libs/<lib>/tests/`. Examples live under `examples/<lib>/`.

## Third-Party Policy
- No LGPL or GPL code copied.
- All third-party licenses must be permissive and listed in `third_party/`.
- `ds_data` uses `nlohmann/json` (MIT) from `third_party/nlohmann_json`.
