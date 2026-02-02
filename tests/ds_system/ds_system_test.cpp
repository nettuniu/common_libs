#include "ds_system/ds_system.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::system::LibraryInfo::name(), "ds_system") == 0);
    return ds_test_finalize();
    }
