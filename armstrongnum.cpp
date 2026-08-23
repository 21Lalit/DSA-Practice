#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a three digit number: "<<endl;
    cin >> num;
    int n = num;
    int n1 = n%10;
    int n2 = (n/10)%10;
    int n3 = (n/100);
    int n4 = n1*n1*n1+n2*n2*n2+n3*n3*n3;
    if (n4 == num) {
        cout << "It is an armstrong number."<< endl;
    } else {
        cout <<"It's not an armstrong number."<< endl;
    }
    return 0;
}