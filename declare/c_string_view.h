#pragma once

#include <memory>

namespace final {

    class c_string_view {
    public:
        explicit c_string_view(const char *str = "");

        ~c_string_view();

        [[nodiscard]] const char *c_str() const;

    private:
        const std::unique_ptr<class c_string_view_data> data;
    };

}
