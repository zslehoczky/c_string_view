#include <c_string_view.h>
#include <c_string_view/c_str.hpp>
#include <c_string_view/c_string_view.hpp>

#include <iostream>

using namespace final;

int main() {
    c_string_view val("aa");

    std::cout << val.c_str() << std::endl;
}
