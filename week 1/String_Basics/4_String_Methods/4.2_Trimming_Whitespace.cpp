#include <iostream>
#include <string>
#include <algorithm>

std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

int main() {
    std::string str = "   Hello, World!   ";
    std::string trimmed_str = trim(str);

    std::cout << "Original string: '" << str << "'" << std::endl;
    std::cout << "Trimmed string: '" << trimmed_str << "'" << std::endl;

    return 0;
}