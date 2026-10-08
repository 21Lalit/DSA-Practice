#include<iostream>
using namespace std;

void BinaryToDec(int BinaryNum) {
    int DecNum = 0;
    int power = 1;
    int n = BinaryNum;

    while(n>0) {
        DecNum += power*(n%10);
        n /= 10;
        power *= 2;
    }
    cout << DecNum << endl;
}


int main() {
    BinaryToDec(111111);
    BinaryToDec(10110);
    BinaryToDec(10011);
    BinaryToDec(110010);
    return 0;
}