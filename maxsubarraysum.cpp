#include<iostream>
using namespace std;

// time complexity is O(n*n*n)

int MaxSubSum = INT_MIN;

void MaxSubArrSum(int *arr, int n) {
    for(int start=0; start<n; start++) {
        for(int end=start; end<n; end++) {
            int CurrSum = 0;
            for(int i=start; i<=end; i++) {
                CurrSum += arr[i];
            }
            MaxSubSum = max(MaxSubSum, CurrSum);
            cout << CurrSum << ",";
        }
        cout <<endl;
    }
    cout << "Maximum Sub-array sum is: " << MaxSubSum<<"\n";
}

int main() {
    int arr[7] = {1,5,3,-2,8,-3,-5};
    int n = sizeof(arr)/sizeof(int);

    MaxSubArrSum(arr, n);

    return 0;
}