add_library(ds_base
  src/ds_base.cpp
  )

target_include_directories(ds_base
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_base PUBLIC cxx_std_20)
