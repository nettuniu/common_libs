set(DS_TEST_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(ds_base_test ds_base/ds_base_test.cpp)
target_include_directories(ds_base_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_base_test PRIVATE ds_base)
add_test(NAME ds_base_test COMMAND ds_base_test)

add_executable(ds_core_test ds_core/ds_core_test.cpp)
target_include_directories(ds_core_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_core_test PRIVATE ds_core)
add_test(NAME ds_core_test COMMAND ds_core_test)

add_executable(ds_memory_test ds_memory/ds_memory_test.cpp)
target_include_directories(ds_memory_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_memory_test PRIVATE ds_memory)
add_test(NAME ds_memory_test COMMAND ds_memory_test)

add_executable(ds_math_test ds_math/ds_math_test.cpp)
target_include_directories(ds_math_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_math_test PRIVATE ds_math)
add_test(NAME ds_math_test COMMAND ds_math_test)

add_executable(ds_data_test ds_data/ds_data_test.cpp)
target_include_directories(ds_data_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_data_test PRIVATE ds_data)
add_test(NAME ds_data_test COMMAND ds_data_test)

add_executable(ds_system_test ds_system/ds_system_test.cpp)
target_include_directories(ds_system_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_system_test PRIVATE ds_system)
add_test(NAME ds_system_test COMMAND ds_system_test)

add_executable(ds_io_test ds_io/ds_io_test.cpp)
target_include_directories(ds_io_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_io_test PRIVATE ds_io)
add_test(NAME ds_io_test COMMAND ds_io_test)

add_executable(ds_net_test ds_net/ds_net_test.cpp)
target_include_directories(ds_net_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_net_test PRIVATE ds_net)
add_test(NAME ds_net_test COMMAND ds_net_test)

add_executable(ds_gui_bridge_test ds_gui_bridge/ds_gui_bridge_test.cpp)
target_include_directories(ds_gui_bridge_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_gui_bridge_test PRIVATE ds_gui_bridge)
add_test(NAME ds_gui_bridge_test COMMAND ds_gui_bridge_test)

add_executable(ds_app_test ds_app/ds_app_test.cpp)
target_include_directories(ds_app_test PRIVATE ${DS_TEST_INCLUDE_DIR})
target_link_libraries(ds_app_test PRIVATE ds_app)
add_test(NAME ds_app_test COMMAND ds_app_test)
