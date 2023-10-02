#include <iostream>
using namespace std;

int main() {
    const int numMonths = 12;
    double rainfall[numMonths];
    double totalRainfall = 0.0;
    double averageRainfall = 0.0;
    double maxRainfall = 0.0;
    double minRainfall = 0.0;

    // Nhập lượng mưa cho từng tháng
    cout << "Nhập lượng mưa cho từng tháng (không chấp nhận số âm):\n";
    for (int i = 0; i < numMonths; i++) {
        while (true) {
            cout << "Tháng " << i + 1 << ": ";
            cin >> rainfall[i];

            if (rainfall[i] >= 0) {
                break;
            }
            else {
                cout << "Lượng mưa không hợp lệ. Vui lòng nhập lại.\n";
            }
        }
    }

    // Tính tổng lượng mưa
    for (int i = 0; i < numMonths; i++) {
        totalRainfall += rainfall[i];
    }

    // Tính lượng mưa trung bình tháng
    averageRainfall = totalRainfall / numMonths;

    // Tìm lượng mưa cao nhất và thấp nhất
    maxRainfall = rainfall[0];
    minRainfall = rainfall[0];
    for (int i = 1; i < numMonths; i++) {
        if (rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
        }
        if (rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
        }
    }

    // Hiển thị kết quả
    cout << "Tổng lượng mưa trong năm: " << totalRainfall << " mm\n";
    cout << "Lượng mưa trung bình hàng tháng: " << averageRainfall << " mm\n";
    cout << "Tháng có lượng mưa cao nhất: " << maxRainfall << " mm\n";
    cout << "Tháng có lượng mưa thấp nhất: " << minRainfall << " mm\n";

    return 0;
}