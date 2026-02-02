add_library(ds_data
  src/ds_data.cpp
  )

target_include_directories(ds_data
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/third_party/nlohmann_json/include
  )

target_compile_features(ds_data PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_data_test tests/ds_data_test.cpp)
  target_include_directories(ds_data_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_data_test PRIVATE ds_data)
  add_test(NAME ds_data_test COMMAND ds_data_test)
endif()
