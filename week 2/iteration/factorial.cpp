#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 1){
        return 1;
    }
    int result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}

int main(){
    int n = 5;
    int result = factorial(n);
    cout << "The factorial of " << n << " is: " << result << endl;
    return 0;
}
