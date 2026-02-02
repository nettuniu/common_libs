#include "ds_io/ds_io.h"
#include <iostream>

int main()
    {
    std::cout << ds::io::LibraryInfo::name() << " " << ds::io::LibraryInfo::version() << "\n";
    return 0;
    }
