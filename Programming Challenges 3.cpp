#include <iostream>
#include <string>
using namespace std;

const int numSalsas = 5;

int main() {
    string salsaNames[numSalsas] = { "Nhẹ", "Vừa", "Ngọt", "Nóng", "Nồng nàn" };
    int salsaSales[numSalsas];
    int totalSales = 0;
    int maxSalesIndex = 0;
    int maxSales = 0;

    // Nhập số lượng lọ được bán cho từng loại salsa
    cout << "Nhập số lượng lọ được bán cho từng loại salsa (không chấp nhận số âm):\n";
    for (int i = 0; i < numSalsas; i++) {
        while (true) {
            cout << "Số lọ bán cho salsa '" << salsaNames[i] << "': ";
            cin >> salsaSales[i];

            if (salsaSales[i] >= 0) {
                break;
            }
            else {
                cout << "Số lọ không hợp lệ. Vui lòng nhập lại.\n";
            }
        }
        totalSales += salsaSales[i];

        // Tìm loại salsa có doanh số bán chạy nhất
        if (salsaSales[i] > maxSales) {
            maxSales = salsaSales[i];
            maxSalesIndex = i;
        }
    }

    // Hiển thị báo cáo doanh số bán hàng
    cout << "\nBáo cáo doanh số bán hàng:\n";
    for (int i = 0; i < numSalsas; i++) {
        cout << "Số lọ bán cho salsa '" << salsaNames[i] << "': " << salsaSales[i] << endl;
    }
    cout << "Tổng doanh số bán hàng: " << totalSales << " lọ\n";
    cout << "Loại salsa bán chạy nhất: " << salsaNames[maxSalesIndex] << endl;

    return 0;
}