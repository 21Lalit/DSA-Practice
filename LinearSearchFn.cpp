#include<iostream>
using namespace std;

int linearsearch(int krr[], int n, int k) {
    for(int i=0; i<n; i++) {
        if(krr[i] == k)
            cout << "key " << k << " found at position " << i <<endl;
    }
    return -1;
}

int main() {
    int key;
    int arr[10] = {2,3,4,7,8,9,0,1,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout << "Enter the key to search in the array"<<endl;
    cin >> key;

    linearsearch(arr, n, key);

   return 0; 
}