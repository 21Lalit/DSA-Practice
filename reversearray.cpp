#include<iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0;i<n;i++) {
        cout << arr[i] << endl;
    }
}

int main() {

    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int CopyArr[n];
    for(int i=0; i < n; i++) {
        int j = n-i-1;
        CopyArr[j] = arr[i];
    }

    for(int i=0;i<n;i++) {
        arr[i] = CopyArr[i];
    }

    printArr(arr, n);


    return 0;
}