add_library(ds_gui_bridge
  src/ds_gui_bridge.cpp
  )

target_include_directories(ds_gui_bridge
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

target_compile_features(ds_gui_bridge PUBLIC cxx_std_20)
