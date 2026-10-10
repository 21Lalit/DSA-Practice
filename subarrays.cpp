#include<iostream>
using namespace std;

void printarr(int *arr,int n) {
    for(int start = 0; start<n; start++) {
        for(int end = start; end<n; end++) {
            // cout << "(" << start << "," << end << ")"; 
            //checking index values for sub arrays
            for(int i=start; i<=end; i++) {
                cout << arr[i] << " ";
            }
            cout << "," << endl;
        }
    }

}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    printarr(arr, n);

    return 0;

}