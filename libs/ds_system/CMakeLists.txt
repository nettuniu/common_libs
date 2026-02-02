add_library(ds_system
  src/ds_system.cpp
  )

target_include_directories(ds_system
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_system PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_system_test tests/ds_system_test.cpp)
  target_include_directories(ds_system_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_system_test PRIVATE ds_system)
  add_test(NAME ds_system_test COMMAND ds_system_test)
endif()
