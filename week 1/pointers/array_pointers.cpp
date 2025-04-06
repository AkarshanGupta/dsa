#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;

    for(int i = 0; i < 5;i++){
        cout << "the sequnece value is: "<< *ptr << endl;
        ptr++;
    }
    ptr = arr;
    while(ptr < arr  + 5 ){
        cout << "the sequnece value is: "<< *ptr++ << endl;
    }
    return 0;
}