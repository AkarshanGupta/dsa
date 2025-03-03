#include <iostream>

using namespace std;

int main(){
   int arr[5];
   int arr1[5] = {10,20,30};
   int arr2[5] = {10,20,30,40,50};
   int arr3[5] = {0};

   cout << "the array which have zero in it:\n";
   for(int i =0;i < 5;i++){
      cout<<arr3[i]<<" ";
   }
cout << "\n\n";
   cout << "the array values at each index are:\n";
   for(int i = 0;i < 5;i++){
      cout << arr2[i] << " ";
   }
   cout << "\n\n";

   cout << "the partial array values are:\n";
   for(int i =0; i < 5;i++){
      cout << arr1[i] << " ";
   }
   cout << "\n \n";

   cout << "The uninitialized garbage values in arr:\n";
   for(int i = 0; i < 5; i++){
      cout << arr[i] << " ";
   }
   cout << "\n\n";
   return 0;
}
