#include "ds_data/ds_data.h"
#include <iostream>

int main()
    {
    ds::data::JsonDocument doc;
    if (doc.parse("{\"name\": \"ds\", \"value\": 7}"))
        {
        std::cout << doc.dump(2) << "\n";
        }
    else
        {
        std::cout << "Invalid JSON\n";
        }

    return 0;
    }
