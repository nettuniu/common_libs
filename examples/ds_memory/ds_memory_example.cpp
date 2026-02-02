#include "ds_memory/ds_memory.h"
#include <iostream>

int main()
    {
    std::cout << ds::memory::LibraryInfo::name() << " " << ds::memory::LibraryInfo::version() << "\n";
    return 0;
    }
