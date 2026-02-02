#include "ds_gui_bridge/ds_gui_bridge.h"
#include <iostream>

int main()
    {
    std::cout << ds::gui_bridge::LibraryInfo::name() << " " << ds::gui_bridge::LibraryInfo::version() << "\n";
    return 0;
    }
