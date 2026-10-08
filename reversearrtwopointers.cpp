#include<iostream>
using namespace std;
// Used two pointer which helps to overcome the complexities
// Space - O(n/2) = O(n)
// Time - O(1)
void printarr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    
    int start = 0;
    int end = n-1;

    while(start<end) {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp; 
        start++;
        end--;
    }

    printarr(arr, n);

    return 0;
}