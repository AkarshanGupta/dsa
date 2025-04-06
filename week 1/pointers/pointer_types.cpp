#include <iostream>
#include <string>

using namespace std;

int main(){
    int num = 42;
    int* ptr = &num;

    char ch = 'a';
    char* chr = &ch;

    float fl = 3.14;
    float* fr =  &fl;

    double d = 3.14;
    double* db = &d;

    string str = "hello my name is akarshan";
    string* sr = &str;

    cout << "Teh value of nums is: " << *ptr<<  endl;
    cout << "the value of pi is: " << *db << endl;
    cout << "the value of the character is: "<<*chr << endl;
    cout << "The value of the string is: "<< *sr << endl;
    cout << "The value of the float is: " << *fr << endl;

    return 0;
}
