#include <iostream>
#include <string>

using namespace std;
int main(){
    string str = "Hello, world!";
    cout << "Original String: " << str << endl;
    string substring = str.substr(7,5);
    cout << "Modified string: " << substring;

}