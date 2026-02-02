#include "ds_base/ds_base.h"
#include <iostream>

int main()
    {
    std::cout << ds::base::LibraryInfo::name() << " " << ds::base::LibraryInfo::version() << "\n";
    return 0;
    }
