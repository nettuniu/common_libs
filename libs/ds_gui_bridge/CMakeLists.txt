add_library(ds_gui_bridge
  src/ds_gui_bridge.cpp
  )

target_include_directories(ds_gui_bridge
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_gui_bridge PUBLIC cxx_std_20)

if (DS_BUILD_TESTS)
  add_executable(ds_gui_bridge_test tests/ds_gui_bridge_test.cpp)
  target_include_directories(ds_gui_bridge_test
    PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tests
      ${CMAKE_SOURCE_DIR}/libs/ds_base/tests
    )
  target_link_libraries(ds_gui_bridge_test PRIVATE ds_gui_bridge)
  add_test(NAME ds_gui_bridge_test COMMAND ds_gui_bridge_test)
endif()
