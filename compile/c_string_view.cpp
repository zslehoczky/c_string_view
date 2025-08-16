#include <c_string_view.h>

#include <c_string_view/c_string_view_data.hpp>

using namespace final;

c_string_view::c_string_view(const char *str)
    : data(std::make_unique<c_string_view_data>(str)) {}

c_string_view::~c_string_view() = default;

const char *c_string_view::c_str() const
{
    return data->data();
}
