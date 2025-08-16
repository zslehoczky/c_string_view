#pragma once

#include <c_string_view.h>
#include "c_string_view_data.hpp"

namespace final {

    inline const char *c_string_view::c_str() const {
        return data->data();
    }

}
