#include "ds_net/ds_net.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::net::LibraryInfo::name(), "ds_net") == 0);
    return ds_test_finalize();
    }
