#include "ds_math/ds_math.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::math::LibraryInfo::name(), "ds_math") == 0);
    return ds_test_finalize();
    }
