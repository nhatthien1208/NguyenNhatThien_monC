#include <iostream>
#include <fstream>

const int NUM_MONTHS = 3;
const int NUM_DAYS = 30;

void readWeatherData(char weatherData[NUM_MONTHS][NUM_DAYS]) {
    std::ifstream file("RainOrShine.txt");
    if (file.is_open()) {
        for (int i = 0; i < NUM_MONTHS; ++i) {
            for (int j = 0; j < NUM_DAYS; ++j) {
                file >> weatherData[i][j];
            }
        }
        file.close();
    }
    else {
        std::cout << "Không thể mở tệp." << std::endl;
    }
}

void generateReport(const char weatherData[NUM_MONTHS][NUM_DAYS]) {
    const char weatherTypes[] = { 'R', 'C', 'S' };
    const std::string monthNames[] = { "Tháng 6", "Tháng 7", "Tháng 8" };
    int monthCounts[NUM_MONTHS][3] = { {0} };

    for (int i = 0; i < NUM_MONTHS; ++i) {
        for (int j = 0; j < NUM_DAYS; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (weatherData[i][j] == weatherTypes[k]) {
                    monthCounts[i][k]++;
                    break;
                }
            }
        }
    }

    std::cout << "Báo cáo thời tiết:" << std::endl;
    for (int i = 0; i < NUM_MONTHS; ++i) {
        std::cout << monthNames[i] << std::endl;
        std::cout << "Số ngày mưa: " << monthCounts[i][0] << std::endl;
        std::cout << "Số ngày nhiều mây: " << monthCounts[i][1] << std::endl;
        std::cout << "Số ngày nắng: " << monthCounts[i][2] << std::endl;
        std::cout << std::endl;
    }

    int maxRainMonth = 0;
    int maxRainDays = monthCounts[0][0];
    for (int i = 1; i < NUM_MONTHS; ++i) {
        if (monthCounts[i][0] > maxRainDays) {
            maxRainMonth = i;
            maxRainDays = monthCounts[i][0];
        }
    }
    std::cout << "Tháng có số ngày mưa nhiều nhất: " << monthNames[maxRainMonth] << std::endl;
}

int main() {
    char weatherData[NUM_MONTHS][NUM_DAYS];

    readWeatherData(weatherData);
    generateReport(weatherData);

    return 0;
}