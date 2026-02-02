#include "ds_app/ds_app.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::app::LibraryInfo::name(), "ds_app") == 0);
    return ds_test_finalize();
    }
