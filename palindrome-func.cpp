#include<iostream>
using namespace std;


int reverse(int num) {
    int reverse = 0;
    int n = num;
    while(n>0) {
        int a = n%10;
        n /=10;
        reverse = reverse*10 + a; 
    }
    return reverse;
}

bool isPalindrome(int num) {
    int rev = reverse(num);
    return (num == rev);
}

int main() {
    cout << isPalindrome(325523) << endl;
    return 0;
}