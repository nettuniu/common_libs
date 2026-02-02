#include "ds_memory/ds_memory.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::memory::LibraryInfo::name(), "ds_memory") == 0);
    return ds_test_finalize();
    }
