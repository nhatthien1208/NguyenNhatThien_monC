#include <iostream>
using namespace std;

void displayNumbersGreaterThanN(int arr[], int size, int n) {
    cout << "Các số lớn hơn " << n << " trong mảng là: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int size = 5;
    int arr[size] = { 10, 20, 30, 40, 50 };
    int n = 25;

    displayNumbersGreaterThanN(arr, size, n);

    return 0;
}