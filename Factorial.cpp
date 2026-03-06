#include <iostream>
using namespace std;
int factorialRec(int n) {
    if(n == 0) return 1;
    return n * factorialRec(n - 1);
}

int factorialIter(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Recursive: " << factorialRec(n) << endl;
    cout << "Iterative: " << factorialIter(n) << endl;
    return 0;
}