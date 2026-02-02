add_library(ds_core
  src/ds_core.cpp
  )

target_include_directories(ds_core
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_core PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_core_test tests/ds_core_test.cpp)
  target_include_directories(ds_core_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_core_test PRIVATE ds_core)
  add_test(NAME ds_core_test COMMAND ds_core_test)
endif()
