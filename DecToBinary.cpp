#include<iostream>
using namespace std;

void DecToBinary(int DecNum) {
    int BinaryNum = 0;
    int power = 1;
    int n = DecNum;

    while(n>0) {
        BinaryNum += power*(n%2);
        power *= 10;
        n /= 2;
    }
    cout << BinaryNum<< endl;
}


int main() {
    DecToBinary(25);
    DecToBinary(49);
    DecToBinary(31);
    DecToBinary(88);
    return 0;
}