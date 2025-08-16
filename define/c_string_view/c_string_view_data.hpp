#pragma once

#include <string_view>

namespace final {

    struct c_string_view_data : std::string_view {
        explicit c_string_view_data(const char *str)
                : std::string_view(str) {
        }
    };

}
