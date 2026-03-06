#include <iostream>
using namespace std;

int main() {
    int capacity = 2;
    int size = 0;
    int *arr = new int[capacity];
    int n, val;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> val;
        if(size == capacity) {
            int *temp = new int[capacity * 2];
            for(int j = 0; j < size; j++)
                temp[j] = arr[j];
            delete[] arr;
            arr = temp;
            capacity *= 2;
        }
        arr[size++] = val;
    }
    cout << "Array elements: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}