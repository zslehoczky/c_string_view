#pragma once

#include <string_view>

namespace final
{
    class c_string_view : private std::string_view
    {
    public:
        explicit c_string_view(const char *str = "") : std::string_view{str} {}

        c_string_view(const c_string_view &other) = default;
        c_string_view &operator=(const c_string_view &other) = default;

        c_string_view(c_string_view &&other) = default;
        c_string_view &operator=(c_string_view &&other) = default;

        ~c_string_view() = default;

        [[nodiscard]] const char *c_str() const
        {
            return data();
        }

        const std::string_view &as_string_view() const
        {
            return *this;
        }
    };
}
