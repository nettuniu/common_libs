add_library(ds_net
  src/ds_net.cpp
  )

target_include_directories(ds_net
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_net PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_net_test tests/ds_net_test.cpp)
  target_include_directories(ds_net_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_net_test PRIVATE ds_net)
  add_test(NAME ds_net_test COMMAND ds_net_test)
endif()
