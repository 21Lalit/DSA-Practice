#include <iostream>
using namespace std;

int main() {
    float pencil, pen, eraser;
    cout << "Enter the price of pencil:\n";
    cin >> pencil;
    cout << "Enter the price of pen:\n";
    cin >> pen;
    cout << "Enter the price of eraser:\n";
    cin >> eraser;
    float total = pencil + pen + eraser;
    cout << "GST of 18% is added to the total price of items." << endl;
    float GST = total * 0.18;
    float totalPrice = total + GST;
    cout << "Total price of items is: " << total << endl;
    cout << "18% GST of" << total << " is: " << GST << endl;
    cout << "Total price of items after adding GST is: " << totalPrice << endl;
    return 0;
}