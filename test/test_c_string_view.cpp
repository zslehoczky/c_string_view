#include <c_string_view.hpp>

#include <cassert>

using namespace final;

int main()
{
    constexpr auto literal = "aa";

    c_string_view val(literal);

    assert(val.c_str() == literal);
}
