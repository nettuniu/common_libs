#include "ds_math/ds_math.h"
#include <iostream>

int main()
    {
    std::cout << ds::math::LibraryInfo::name() << " " << ds::math::LibraryInfo::version() << "\n";
    return 0;
    }
