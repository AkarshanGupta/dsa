#include <iostream>
using namespace std;

int main(){
    int number = 42;
    int *ptr = &number;

    cout << "the value of the pointer is : "<< *ptr<< endl;

    *ptr = 179; 
    cout << "the value of the pointer is: "<< *ptr << endl;
    return 0; 
}