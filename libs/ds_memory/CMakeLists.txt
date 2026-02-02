add_library(ds_memory
  src/ds_memory.cpp
  )

target_include_directories(ds_memory
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_memory PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_memory_test tests/ds_memory_test.cpp)
  target_include_directories(ds_memory_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_memory_test PRIVATE ds_memory)
  add_test(NAME ds_memory_test COMMAND ds_memory_test)
endif()
