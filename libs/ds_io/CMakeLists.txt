add_library(ds_io
  src/ds_io.cpp
  )

target_include_directories(ds_io
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_io PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_io_test tests/ds_io_test.cpp)
  target_include_directories(ds_io_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_io_test PRIVATE ds_io)
  add_test(NAME ds_io_test COMMAND ds_io_test)
endif()
