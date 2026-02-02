add_library(ds_net
  src/ds_net.cpp
  )

target_include_directories(ds_net
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_net PUBLIC cxx_std_20)
