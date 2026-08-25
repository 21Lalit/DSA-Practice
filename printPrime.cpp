#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter the number upto you want to print prime number starting from 2:" << endl;
    cin >> num;

    for(int i=2;i<=num;i++) {
        int currentNum = i;
        bool isPrime = true;
        for(int j = 2; j<=sqrt(i); j++) {
            if(currentNum%j == 0) {
                isPrime = false;
            }
        }
        if(isPrime) {
            cout << currentNum << " ";
        }
    }
    return 0;
}