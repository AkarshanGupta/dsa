#include <iostream>

using namespace std;
int add(int a,int b){
    return (a + b);
}
int subtract(int a, int b){
    return (a - b);
}
int main(){
 
   int (*operation)(int,int);

    operation = add;
    cout << "the additon of two number is: "<< operation(11,17) << endl;

   operation = subtract;
   cout << "the subtsraction of two number is: " << operation(17,11) << endl;
   return 0;
}