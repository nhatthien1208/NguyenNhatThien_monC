#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

int main() {
    std::string fileName;
    std::cout << "Nhập tên tệp: ";
    std::cin >> fileName;

    std::ifstream file(fileName);
    if (!file) {
        std::cout << "Không thể mở tệp." << std::endl;
        return 1;
    }

    std::vector<int> numbers;
    int num;
    while (file >> num) {
        numbers.push_back(num);
    }
    file.close();

    if (numbers.empty()) {
        std::cout << "Tệp rỗng." << std::endl;
        return 0;
    }

    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();
    int sum = 0;

    for (int number : numbers) {
        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
        sum += number;
    }

    double average = static_cast<double>(sum) / numbers.size();

    std::cout << "Số thấp nhất trong mảng: " << min << std::endl;
    std::cout << "Số cao nhất trong mảng: " << max << std::endl;
    std::cout << "Tổng các số trong mảng: " << sum << std::endl;
    std::cout << "Trung bình cộng của các số trong mảng: " << average << std::endl;

    return 0;
}