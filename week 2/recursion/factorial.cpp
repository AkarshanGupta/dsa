#include <iostream>

using namespace std;

int factorial(int n){
    if(n <=1){
        return 1;
    }
    else {
    return n * factorial(n-1);
    }
}

int main(){
    int n = 6;
    cout << "The factorial of number is: " << factorial(n) << endl;
    return 0;
}