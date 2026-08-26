#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int a = rows;

    for(int i=0; i<rows; i++) {
        for(int j=0; j<a; j++) {
            cout << "*";
        }
        a -= 1;
        cout << endl;
    }
    return 0;
}