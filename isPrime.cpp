#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: " << endl;
    cin >> num;

    bool isPrime = true;
    if(num == 0 || num == 1) {
        isPrime = false;
    } else {
        for(int i=2; i<=sqrt(num); i++) {
            if(num%i == 0) {
                isPrime = false;
            }
        }
    }
    if(isPrime) {
        cout << "It is a prime number." <<endl;
    } else {
        cout << "It is not a prime number."<<endl;
    }
    return 0;
}