#include <iostream>
using namespace std;

int main() {
    int P, R, T;
    cout << "Enter the principal amout: ";
    cin >> P;
    cout << "Enter the rate of interest: ";
    cin >> R;
    cout << "Enter the time period: ";
    cin >> T;

    float SI = (P * R * T )/100;
    cout << "Simple Interest is: " << SI << endl;
    return 0;
}