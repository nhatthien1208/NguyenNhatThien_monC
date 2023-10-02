#include <iostream>

const int SIZE = 7;

void calculateSalary(int empId[], int hours[], double payRate[], double salary[]) {
    for (int i = 0; i < SIZE; ++i) {
        salary[i] = hours[i] * payRate[i];
    }
}

int main() {
    int empId[SIZE] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
    int hours[SIZE];
    double payRate[SIZE];
    double salary[SIZE];

    std::cout << "Nhập số giờ làm việc và mức lương theo giờ cho từng nhân viên:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Nhập số giờ làm việc của nhân viên " << empId[i] << ": ";
        std::cin >> hours[i];
        std::cout << "Nhập mức lương theo giờ của nhân viên " << empId[i] << ": ";
        std::cin >> payRate[i];
    }

    calculateSalary(empId, hours, payRate, salary);

    std::cout << "Tổng tiền lương của các nhân viên:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Nhân viên " << empId[i] << ": $" << salary[i] << std::endl;
    }

    return 0;
}