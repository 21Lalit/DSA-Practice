#include<iostream>
using namespace std;

int maxSum = INT_MIN;
int currentSum = 0;

void MaXSubSum (int *arr, int n) {
    for(int i=0; i<n; i++) {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum<0) {
            currentSum = 0;
        }
    }
    cout << "Maximum Subarray Sum is: " << maxSum;
}

int main() {
    int arr[6] = {1,-2,3,4,-5,6};
    int n = sizeof(arr)/sizeof(int);

    MaXSubSum(arr, n);
}