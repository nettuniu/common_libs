add_library(ds_app
  src/ds_app.cpp
  )

target_include_directories(ds_app
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_app PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_app_test tests/ds_app_test.cpp)
  target_include_directories(ds_app_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_app_test PRIVATE ds_app)
  add_test(NAME ds_app_test COMMAND ds_app_test)
endif()
