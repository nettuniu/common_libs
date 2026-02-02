#include "ds_data/ds_data.h"
#include "common_test_runner.h"
#include <string>

int main()
    {
    DS_TEST_ASSERT(ds::data::LibraryInfo::name() != nullptr);

    const std::string valid_json = "{\"value\": 42}";
    const std::string invalid_json = "{\"value\": }";

    DS_TEST_ASSERT(ds::data::JsonDocument::validate(valid_json));
    DS_TEST_ASSERT(!ds::data::JsonDocument::validate(invalid_json));

    ds::data::JsonDocument doc;
    DS_TEST_ASSERT(doc.parse(valid_json));
    DS_TEST_ASSERT(doc.isValid());
    DS_TEST_ASSERT(!doc.dump(0).empty());

    return ds_test_finalize();
    }
