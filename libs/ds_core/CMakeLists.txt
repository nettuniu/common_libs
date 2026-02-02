add_library(ds_core
  src/ds_core.cpp
  )

target_include_directories(ds_core
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_core PUBLIC cxx_std_20)
