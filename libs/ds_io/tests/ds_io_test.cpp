#include "ds_io/ds_io.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::io::LibraryInfo::name(), "ds_io") == 0);
    return ds_test_finalize();
    }
