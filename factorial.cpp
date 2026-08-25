#include <iostream>
using namespace std;

int main() {
    int num;
    int fact = 1;
    cout << "Enter a number to find the factorial: "<<endl;
    cin >> num;

    for(int i=num; i>1; i--) {
        fact *= i;            // fact = fact*i;
    }
    cout << fact << endl;
    return 0;
}