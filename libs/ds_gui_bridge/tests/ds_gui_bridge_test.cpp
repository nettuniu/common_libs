#include "ds_gui_bridge/ds_gui_bridge.h"
#include "common_test_runner.h"
#include <cstring>

int main()
    {
    DS_TEST_ASSERT(std::strcmp(ds::gui_bridge::LibraryInfo::name(), "ds_gui_bridge") == 0);
    return ds_test_finalize();
    }
