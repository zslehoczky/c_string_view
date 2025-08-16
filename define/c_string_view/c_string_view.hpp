#pragma once

#include <c_string_view.h>

namespace final {

    inline c_string_view::c_string_view(const char *str)
            : data(std::make_unique<c_string_view_data>(str)) {}

}
