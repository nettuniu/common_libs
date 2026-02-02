#include "ds_net/ds_net.h"
#include <iostream>

int main()
    {
    std::cout << ds::net::LibraryInfo::name() << " " << ds::net::LibraryInfo::version() << "\n";
    return 0;
    }
