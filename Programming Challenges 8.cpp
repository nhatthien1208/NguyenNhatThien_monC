#include <iostream>

const int SIZE = 3;

bool isLoShuSquare(int square[SIZE][SIZE]) {
    // Kiểm tra tổng hàng
    int rowSum = square[0][0] + square[0][1] + square[0][2];
    for (int i = 1; i < SIZE; ++i) {
        int sum = square[i][0] + square[i][1] + square[i][2];
        if (sum != rowSum) {
            return false;
        }
    }

    // Kiểm tra tổng cột
    for (int j = 0; j < SIZE; ++j) {
        int sum = square[0][j] + square[1][j] + square[2][j];
        if (sum != rowSum) {
            return false;
        }
    }

    // Kiểm tra tổng đường chéo chính
    int mainDiagonalSum = square[0][0] + square[1][1] + square[2][2];
    if (mainDiagonalSum != rowSum) {
        return false;
    }

    // Kiểm tra tổng đường chéo phụ
    int secondaryDiagonalSum = square[0][2] + square[1][1] + square[2][0];
    if (secondaryDiagonalSum != rowSum) {
        return false;
    }

    return true;
}

int main() {
    int square[SIZE][SIZE];

    std::cout << "Nhập các phần tử của mảng 3x3:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> square[i][j];
        }
    }

    if (isLoShuSquare(square)) {
        std::cout << "Mảng là một hình vuông ma thuật Lo Shu." << std::endl;
    }
    else {
        std::cout << "Mảng không phải là một hình vuông ma thuật Lo Shu." << std::endl;
    }

    return 0;
}