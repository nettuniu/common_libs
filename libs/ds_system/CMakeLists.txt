add_library(ds_system
  src/ds_system.cpp
  )

target_include_directories(ds_system
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_system PUBLIC cxx_std_20)
