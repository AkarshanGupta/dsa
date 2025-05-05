#include <iostream>

using namespace std;

void fibo(int terms){
    int a = 0, b = 1;
    cout << "Fibo Series";
    for(int i =0;i < terms;i++){
        cout << a << "";
        int next = a + b;
        a = b;
        b = next;

    }
    cout << endl;
}
int main() {
    int terms = 10;
    fibo(terms);
    return 0;
}