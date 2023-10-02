#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int max_value, min_value;

    // Nhập giá trị vào mảng
    cout << "Nhập 10 giá trị vào mảng:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Giá trị thứ " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Tìm giá trị lớn nhất và nhỏ nhất trong mảng
    max_value = arr[0];
    min_value = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }

    // Hiển thị giá trị lớn nhất và nhỏ nhất
    cout << "Giá trị lớn nhất trong mảng: " << max_value << endl;
    cout << "Giá trị nhỏ nhất trong mảng: " << min_value << endl;

    return 0;
}