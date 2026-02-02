cmake_minimum_required(VERSION 3.20)

project(common_libs LANGUAGES CXX)

option(DS_BUILD_TESTS "Build tests" ON)
option(DS_BUILD_EXAMPLES "Build examples" ON)

add_subdirectory(libs/ds_base)
add_subdirectory(libs/ds_core)
add_subdirectory(libs/ds_memory)
add_subdirectory(libs/ds_math)
add_subdirectory(libs/ds_data)
add_subdirectory(libs/ds_system)
add_subdirectory(libs/ds_io)
add_subdirectory(libs/ds_net)
add_subdirectory(libs/ds_gui_bridge)
add_subdirectory(libs/ds_app)

if (DS_BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()

if (DS_BUILD_EXAMPLES)
  add_subdirectory(examples)
endif()
