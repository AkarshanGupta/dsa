#include <iostream>
#include <vector>  // For C++ standard library dynamic arrays

int main() {
    std::cout << "DYNAMIC ARRAY DECLARATION & INITIALIZATION\n";
    std::cout << "=========================================\n\n";
    
    // Dynamic arrays have size determined at runtime
    
    int size;
    std::cout << "Enter the size for the dynamic arrays: ";
    std::cin >> size;
    
    std::cout << "\n1. C-style dynamic array using 'new':\n";
    
    // 1. Dynamic array allocation using new
    int* dynamicArray = new int[size];
    
    // Initialize the dynamic array
    std::cout << "   Initializing with values 1 to " << size << ":\n   ";
    for(int i = 0; i < size; i++) {
        dynamicArray[i] = i + 1;
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << "\n\n";
    
    // Change values in the dynamic array
    std::cout << "   Doubling all values:\n   ";
    for(int i = 0; i < size; i++) {
        dynamicArray[i] *= 2;
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << "\n\n";
    
    // Don't forget to deallocate memory when done!
    delete[] dynamicArray;
    std::cout << "   Memory deallocated using 'delete[]'\n\n";
    
    // 2. C++ Standard Library vector (modern dynamic array)
    std::cout << "2. C++ vector (modern dynamic array):\n";
    
    // Declaration and initialization
    std::vector<int> vec(size);  // Creates a vector of specified size
    
    std::cout << "   Initializing with values 10, 20, 30...:\n   ";
    for(int i = 0; i < size; i++) {
        vec[i] = (i + 1) * 10;
        std::cout << vec[i] << " ";
    }
    std::cout << "\n\n";
    
    // Resizing a vector (can't do this with C-style arrays)
    std::cout << "   Resizing vector to " << (size + 2) << " elements:\n   ";
    vec.resize(size + 2, 99);  // New elements initialized to 99
    
    for(int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n\n";
    
    // Adding elements to a vector
    std::cout << "   Adding two more elements (100, 200):\n   ";
    vec.push_back(100);
    vec.push_back(200);
    
    for(int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
    std::cout << "   New size: " << vec.size() << "\n";
    
    // No need to manually deallocate memory for vectors
    // Memory is automatically freed when vec goes out of scope
    
    return 0;
}
