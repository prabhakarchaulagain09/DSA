#include "utils.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

std::vector<int> generateRandomNumbers(int N) {
    std::vector<int> numbers;
    srand(time(0));
    for (int i = 0; i < N; i++) {
        numbers.push_back(rand() % 1000);
    }
    return numbers;
}

void printArray(const std::vector<int>& arr) {
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;
}