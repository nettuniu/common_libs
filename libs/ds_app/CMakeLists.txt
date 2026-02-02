add_library(ds_app
  src/ds_app.cpp
  )

target_include_directories(ds_app
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_app PUBLIC cxx_std_20)
