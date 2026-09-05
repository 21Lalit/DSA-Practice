#include<iostream>
using namespace std;

int largestnum(int a, int b, int c) {
    if(a>b) {
        if(a>c) {
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if(b>c) {
            return b;
        }
        else {
            return c;
        }
    }
}


int main() {
    cout << largestnum(10,500,6000) << endl;
    return 0;
}