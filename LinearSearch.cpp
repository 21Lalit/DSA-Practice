#include<iostream>
using namespace std;

int main() {
    int key;
    cout << "Enter the key you want to search in the array" <<endl;
    cin >> key;
    int arr[10] = {5, 3, 8, 6, 2, 7, 4, 1, 9, 0};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++) {
        if (arr[i] == key) {
            cout << "Key " << key << " found at " << "position " << i <<endl;
            break;
        }
        else {
            if (i == n-1) {
                cout << "key not found in the array" <<endl;
            }
        }

    }
    return 0;
}