#pragma once

#include <c_string_view.h>

namespace final {

    inline const char *c_string_view::c_str() const {
        return data();
    }

}
