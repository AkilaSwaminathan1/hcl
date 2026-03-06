#include <iostream>
using namespace std;

struct Customer {
    string name;
    int id;
};

typedef Customer Cust; 

int main() {
    Cust c1;
    c1.name = "Akila";
    c1.id = 10;
    cout << c1.name << " " << c1.id;
    return 0;
}