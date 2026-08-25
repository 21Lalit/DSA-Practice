#include <iostream>
using namespace std;

int main() {
    int num;
    int digit = 0;
    int sum = 0;
    cout << "Enter the number: " << endl;
    cin >> num;
    int n = num;

    while(n>0) {
        digit = n%10;
        sum += digit*digit*digit;
        n /= 10;
    }
    if(sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}