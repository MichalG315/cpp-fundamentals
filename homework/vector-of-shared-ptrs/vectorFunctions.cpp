#include <iostream>
#include <memory>
#include <string>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vector;

    for (int i = 0; i < count; i++) {
        vector.push_back(std::make_shared<int>(i));
    }

    return vector;
}

void print(std::vector<std::shared_ptr<int>> vector) {
    for (auto i : vector) {
        std::cout << i << "\n";
    }
}

void add10(std::vector<std::shared_ptr<int>> vector) {
    for (auto i : vector) {
        if (!i) {
            return;
        }
        *i += 10;
    }
}

void sub10(int* const ptr) {
    if (!ptr) {
        return;
    }
    *ptr -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> vector) {
    for (auto i : vector) {
        sub10(i.get());
    }
}