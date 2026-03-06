#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "AND: " << (a & b) << endl;
    cout << "OR : " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    cout << "Left shift a<<1: " << (a << 1) << endl;
    cout << "Right shift a>>1: " << (a >> 1) << endl;

    return 0;
}