add_library(ds_math
  src/ds_math.cpp
  )

target_include_directories(ds_math
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_math PUBLIC cxx_std_20)
