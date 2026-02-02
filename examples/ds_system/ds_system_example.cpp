#include "ds_system/ds_system.h"
#include <iostream>

int main()
    {
    std::cout << ds::system::LibraryInfo::name() << " " << ds::system::LibraryInfo::version() << "\n";
    return 0;
    }
