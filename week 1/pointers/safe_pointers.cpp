// 1. Always initialize pointers
int* ptr = nullptr;

// 2. Check for nullptr before dereferencing
if (ptr != nullptr) {
    *ptr = 42;
}

// 3. Use smart pointers (Modern C++)
#include <memory>

// Unique pointer (single owner)
std::unique_ptr<int> uptr = std::make_unique<int>(42);

// Shared pointer (multiple owners)
std::shared_ptr<int> sptr = std::make_shared<int>(42);