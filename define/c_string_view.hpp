#pragma once

#include <string_view>

namespace final
{
    class c_string_view : public std::string_view
    {
    public:
        explicit c_string_view(const char *str = "") : std::string_view{str} {}

        [[nodiscard]] const char *c_str() const
        {
            return data();
        }
    };
}
