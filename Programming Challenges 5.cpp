#include <iostream>
using namespace std;

const int numMonkeys = 3;
const int numDays = 5;

void enterFoodData(int foodData[numMonkeys][numDays]) {
    for (int i = 0; i < numMonkeys; i++) {
        cout << "Nhập dữ liệu thức ăn cho khỉ " << i + 1 << ":\n";
        for (int j = 0; j < numDays; j++) {
            while (true) {
                cout << "Thức ăn (pound) cho ngày " << j + 1 << ": ";
                cin >> foodData[i][j];

                if (foodData[i][j] >= 0) {
                    break;
                }
                else {
                    cout << "Lượng thức ăn không hợp lệ. Vui lòng nhập lại.\n";
                }
            }
        }
    }
}

void calculateAverageFood(int foodData[numMonkeys][numDays]) {
    int totalFood = 0;
    for (int i = 0; i < numMonkeys; i++) {
        for (int j = 0; j < numDays; j++) {
            totalFood += foodData[i][j];
        }
    }
    double averageFood = static_cast<double>(totalFood) / (numMonkeys * numDays);
    cout << "Lượng thức ăn trung bình một ngày của cả gia đình khỉ: " << averageFood << " pound\n";
}

void calculateMinFood(int foodData[numMonkeys][numDays]) {
    int minFood = foodData[0][0];
    for (int i = 0; i < numMonkeys; i++) {
        for (int j = 0; j < numDays; j++) {
            if (foodData[i][j] < minFood) {
                minFood = foodData[i][j];
            }
        }
    }
    cout << "Lượng thức ăn ít nhất mà một con khỉ ăn trong tuần: " << minFood << " pound\n";
}

void calculateMaxFood(int foodData[numMonkeys][numDays]) {
    int maxFood = foodData[0][0];
    for (int i = 0; i < numMonkeys; i++) {
        for (int j = 0; j < numDays; j++) {
            if (foodData[i][j] > maxFood) {
                maxFood = foodData[i][j];
            }
        }
    }
    cout << "Lượng thức ăn lớn nhất mà một con khỉ ăn trong tuần: " << maxFood << " pound\n";
}

int main() {
    int foodData[numMonkeys][numDays];

    enterFoodData(foodData);
    calculateAverageFood(foodData);
    calculateMinFood(foodData);
    calculateMaxFood(foodData);

    return 0;
}