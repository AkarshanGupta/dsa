#include <iostream>

using namespace std;

int main() {
    int* ptr = new int;    // Dynamically allocate memory
    *ptr = 1101;           // Assign value to allocated memory

    // Print the value stored in the pointer
    cout << "Value pointed by ptr: " << *ptr << endl;

    // Free memory and nullify pointer
    delete ptr;            
    ptr = nullptr;

    // Print the value of null pointer
    cout << "The value of ptr after nullification: " << ptr << endl;
    cout << "the Memory address is: " << &ptr << endl;

    return 0;
}