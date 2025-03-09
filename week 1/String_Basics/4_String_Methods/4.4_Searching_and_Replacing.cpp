#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "Hello World!";
    size_t found = str.find("World");
    if (found != string::npos){
        cout << "the wored is found " << found << endl;
    }
    else {
        cout << "the word is not found "<<endl;
    }

        str.replace(found, 5 , "C++");
        cout<<"the replaced string is: " << str << endl;

        return 0;
}