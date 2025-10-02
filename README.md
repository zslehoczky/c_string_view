# C-string view

Single-header type which extends std::string_view to be able to return C-strings similarly to std::string, that is to add a c_str() member.

Since std::string_view doesn't keep track whether its contents are zero-terminated, it can't return a C-string via its interface. Using the data() member function to return a pointer-to-char is unsafe to use for such, since this can point to a non-zero-terminated string. If a user stores a C-string in std::string_view and would like to access it using data(), they need to make sure it doesn't get overwritten by another string.
