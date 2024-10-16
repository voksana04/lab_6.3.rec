#include <iostream>
#include <cmath>
using namespace std;

void inputArray(double* arr, int n, int i = 0) {
    if (i < n) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
        inputArray(arr, n, i + 1); 
    }
}

double sumOfSquares(double* arr, int n, int i = 0) {
    if (i >= n) {
        return 0; 
    }
    return arr[i] * arr[i] + sumOfSquares(arr, n, i + 1);
}

void printArray(double* arr, int n, int i = 0) {
    if (i < n) {
        cout << arr[i] << " ";
        printArray(arr, n, i + 1); 
    }
    else {
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    double* arr = new double[n];

    inputArray(arr, n); 

    double sumSquares = sumOfSquares(arr, n); 
    cout << "Sum of squares of array elements: " << sumSquares << endl;

    cout << "Array: ";
    printArray(arr, n); 

    delete[] arr; 
    return 0;
}
