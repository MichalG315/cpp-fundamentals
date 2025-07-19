#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int evenSum = 0;

    for (int elem : numbers) {
        if (elem % 2 == 0) {
            evenSum += elem;
        }
    }

    return evenSum;
}
