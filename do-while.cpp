#include <iostream>
using namespace std;
int main() {
    int choice;
    do {
        cout << "\nMenu:\n1. Hello\n2. World\n3. Exit\nChoose: ";
        cin >> choice;
        switch(choice) {
            case 1: cout << "Hello\n"; break;
            case 2: cout << "World\n"; break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid\n";
        }
    } while(choice != 3);
    return 0;
}