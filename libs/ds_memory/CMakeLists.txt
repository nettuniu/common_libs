add_library(ds_memory
  src/ds_memory.cpp
  )

target_include_directories(ds_memory
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_memory PUBLIC cxx_std_20)
