#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "Mutable string";
    cout << "Original String: " << str << endl;

    str[0] = 'm';
    str.replace(8,6,"Example");

    cout << "Modified string: " << str << endl;
    return 0;
}
