#include<iostream>
using namespace std;

// time complexity is reduced to O(n*n)
int MaxSubarrSum = INT_MIN;

void MaxSubSum(int *arr, int n) {
    for(int start=0; start<n; start++) {
        int CurrSum = 0;
        for(int end=start; end<n; end++) {
            CurrSum += arr[end];
        }
        MaxSubarrSum = max(MaxSubarrSum, CurrSum);
    }
    cout << MaxSubarrSum << endl;
}

int main() {
    int arr[5] = {1,2,3,-4,7};
    int n = sizeof(arr)/sizeof(int);

    MaxSubSum(arr, n);

    return 0;

}