#include <c_string_view.hpp>

#include <cassert>
#include <string>

using namespace final;

int main()
{
    constexpr auto literal = "aa";

    c_string_view val{literal};

    assert(val.c_str() == literal);

    std::string from_val{val.as_string_view()};

    assert(from_val == literal);
}
