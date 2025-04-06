#include <iostream>

using namespace std;

int main(){
    int number = 42;
    int *ptr = &number;
    cout << "Value of number:" << number << endl;
    cout << "Addres of the valeye is : " << &number << endl;
    cout << "Vlaue of pointer is  :"<< ptr << endl;
    cout << "Value os derefernced ptr is :" << *ptr << endl;
    cout << "Size of int is: " <<sizeof(int) << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl;
    cout << "Size of pointer is: " << sizeof(*ptr) << endl;
    return 0;
}