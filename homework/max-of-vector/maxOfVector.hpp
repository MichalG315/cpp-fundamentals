#pragma once
#include <algorithm>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    std::vector<int> vector = vec;
    std::sort(vector.begin(), vector.end());

    int max = vector.back();

    return max;
}
