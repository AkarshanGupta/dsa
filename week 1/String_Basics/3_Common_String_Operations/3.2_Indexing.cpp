#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";
    std::cout << "First character: " << str[0] << std::endl;
    std::cout << "Last character: " << str[str.length() - 1] << std::endl;

    return 0;
}