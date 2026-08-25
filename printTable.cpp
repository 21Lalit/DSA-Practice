#include<iostream>
using namespace std;

int main() {
    int tablenum;
    cout << "Enter the table number: "<< endl;
    cin >> tablenum;

    for(int i=1; i<=10; i++) {
        cout << tablenum*i << " ";;
    }
    return 0;
}