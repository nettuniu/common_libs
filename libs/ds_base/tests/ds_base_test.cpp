#include "ds_base/ds_base.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::base::LibraryInfo::name(), "ds_base") == 0);
    return ds_test_finalize();
    }
