#ifndef DS_DATA_H
#define DS_DATA_H

#include <memory>
#include <string>
#include <string_view>

namespace ds::data
    {
    struct LibraryInfo
        {
        static const char* name();
        static const char* version();
        };

    class JsonDocument
        {
        public:
            JsonDocument();
            JsonDocument(const JsonDocument& other);
            JsonDocument(JsonDocument&& other) noexcept;
            JsonDocument& operator=(const JsonDocument& other);
            JsonDocument& operator=(JsonDocument&& other) noexcept;
            ~JsonDocument();

            bool parse(std::string_view text);
            std::string dump(int indent = 2) const;
            bool isValid() const;

            static bool validate(std::string_view text);
        private:
            struct Impl;
            std::unique_ptr<Impl> impl_;
        };
    }

#endif // DS_DATA_H
