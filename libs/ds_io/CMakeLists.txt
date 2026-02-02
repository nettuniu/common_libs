add_library(ds_io
  src/ds_io.cpp
  )

target_include_directories(ds_io
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_io PUBLIC cxx_std_20)
