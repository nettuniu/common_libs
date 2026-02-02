#include "ds_data/ds_data.h"

#include <utility>

#include "nlohmann/json.hpp"

namespace ds::data
    {
    const char* LibraryInfo::name()
        {
        return "ds_data";
        }

    const char* LibraryInfo::version()
        {
        return "0.1.0";
        }

    struct JsonDocument::Impl
        {
        nlohmann::json json;
        bool valid = false;
        };

    JsonDocument::JsonDocument()
      : impl_(std::make_unique<Impl>())
        {
        }

    JsonDocument::JsonDocument(const JsonDocument& other)
      : impl_(std::make_unique<Impl>(*other.impl_))
        {
        }

    JsonDocument::JsonDocument(JsonDocument&& other) noexcept = default;

    JsonDocument& JsonDocument::operator=(const JsonDocument& other)
        {
        if (this == &other)
            {
            return *this;
            }

        *impl_ = *other.impl_;
        return *this;
        }

    JsonDocument& JsonDocument::operator=(JsonDocument&& other) noexcept = default;

    JsonDocument::~JsonDocument() = default;

    bool JsonDocument::parse(std::string_view text)
        {
        try
            {
            impl_->json = nlohmann::json::parse(text.begin(), text.end());
            impl_->valid = true;
            }
        catch (const nlohmann::json::parse_error&)
            {
            impl_->json = nlohmann::json();
            impl_->valid = false;
            }

        return impl_->valid;
        }

    std::string JsonDocument::dump(int indent) const
        {
        if (!impl_->valid)
            {
            return std::string();
            }

        return impl_->json.dump(indent);
        }

    bool JsonDocument::isValid() const
        {
        return impl_->valid;
        }

    bool JsonDocument::validate(std::string_view text)
        {
        try
            {
            const auto parsed = nlohmann::json::parse(text.begin(), text.end());
            (void)parsed;
            return true;
            }
        catch (const nlohmann::json::parse_error&)
            {
            return false;
            }
        }
    }
