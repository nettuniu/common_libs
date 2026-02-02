#include "ds_core/ds_core.h"
#include <iostream>

int main()
    {
    std::cout << ds::core::LibraryInfo::name() << " " << ds::core::LibraryInfo::version() << "\n";
    return 0;
    }
