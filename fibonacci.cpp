#include<iostream>
using namespace std;

int main() {
    int first = 0;
    int second = 1;
    int n;
    cout << "Enter how many numbers you want to print from the series: " << endl;
    cin >> n;
    cout << first << " " << second << " ";


    for(int i=2; i<n;i++) {
        int third = first + second;
        first = second;
        second = third;
        cout << third << " ";
    }
    return 0;
}