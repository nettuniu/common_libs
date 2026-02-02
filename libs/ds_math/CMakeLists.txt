add_library(ds_math
  src/ds_math.cpp
  )

target_include_directories(ds_math
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_math PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_math_test tests/ds_math_test.cpp)
  target_include_directories(ds_math_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_math_test PRIVATE ds_math)
  add_test(NAME ds_math_test COMMAND ds_math_test)
endif()
