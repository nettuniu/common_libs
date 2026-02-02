#include "ds_core/ds_core.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::core::LibraryInfo::name(), "ds_core") == 0);
    return ds_test_finalize();
    }
