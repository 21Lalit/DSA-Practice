#include<iostream>
using namespace std;

int CurrentSum = 0;
int MaxSum = 0;

void MaxSubSum(int *arr, int n) {
    for(int i=0; i<n; i++) {
        CurrentSum += arr[i];
        MaxSum = max(CurrentSum, MaxSum);
        if(CurrentSum<0) {
            CurrentSum = 0;
        }
    }
    cout << "Maximum sub-array sum is: " << MaxSum<<endl;
}

int main() {
    int arr[6] = {-2, 1, -3, 4, -1, 2};
    int n = sizeof(arr)/sizeof(int);
    
    MaxSubSum(arr, n);

    return 0;
}