#pragma once

#include <c_string_view.h>

namespace final {

    inline c_string_view::c_string_view(const char *str)
            : std::string_view(str) {}

}
