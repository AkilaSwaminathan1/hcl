#include <iostream>
using namespace std;

int main() {
    char password[100];
    int length = 0;
    cin >> password;
    while(password[length] != '\0') {
        length++;
    }

    if(length > 8) {
        cout << "Password is valid";
    }
    else {
        cout << "Password is too short";
    }

    return 0;
}