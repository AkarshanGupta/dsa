#include <iostream>

using namespace std;

int power(int x, int n){
    int result = 1;
    for(int i = 0; i < n;i++){
        result *= x;
    }
    return result;
}
int main(){
    int x = 2 ,n = 5;
    cout << x << " raised to power " << n << " is " << power(x, n) << endl;
    return 0;
}