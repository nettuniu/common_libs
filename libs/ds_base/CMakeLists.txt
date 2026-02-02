add_library(ds_base
  src/ds_base.cpp
  )

target_include_directories(ds_base
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_base PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_base_test tests/ds_base_test.cpp)
  target_include_directories(ds_base_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_base_test PRIVATE ds_base)
  add_test(NAME ds_base_test COMMAND ds_base_test)
endif()
