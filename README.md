# C-string view

Work in progress

Single-header type which builds on std::string_view, able to return C-strings with the c_str() member function.

Since std::string_view doesn't keep track whether its contents are zero-terminated, it can't return a C-string via its interface. Using the data() member function to return a pointer-to-char is unsafe to use for such, since this can point to a non-zero-terminated string. If a user stores a C-string in std::string_view and would like to access it using data(), they need to make sure it doesn't get overwritten by another string.

c_string_view can be created and modified through an interface that only accepts C-strings, therefore it can never be overwritten by a non-zero-terminated string. This allows the user to use the c_str() method safely, to always get a zero-terminated string.
