#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str = "Hello, World!";
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout << "The upper case words are: " << str << endl;

    
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout << "The lower case words are: " << str << endl;


    return 0;
}