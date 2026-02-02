#include "ds_app/ds_app.h"
#include <iostream>

int main()
    {
    std::cout << ds::app::LibraryInfo::name() << " " << ds::app::LibraryInfo::version() << "\n";
    return 0;
    }
