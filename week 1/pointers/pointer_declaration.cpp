#include <iostream>
using namespace std;

int main(){
    
// Different ways to declare pointers
// int* ptr1;     // Preferred style in modern C++
// int *ptr2;     // Also valid but less preferred
// int* ptr3, *ptr4; // Multiple pointer declaration

// Always initialize pointers
int number = 10;
int* ptr = &number;  // Good: initialized with  address
// int* ptr = nullptr;  // Good: initialized as null
// int* ptr;           // Bad: uninitialized pointer
cout << "Value of the ptr is: " << *ptr << endl;
cout << "the ptr is addres is: "<< ptr << endl;

return 0;
}