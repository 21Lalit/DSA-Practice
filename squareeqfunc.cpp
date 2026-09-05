#include<iostream>
using namespace std;

int squareeqfunc(int a, int b) {
    return a*a + b*b + 2*a*b;
}


int main() {
    cout << squareeqfunc(3,5) << endl;
    return 0;
}