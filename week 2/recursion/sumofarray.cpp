#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Sum: " << sumArray(arr, n) << endl;
    return 0;
}
