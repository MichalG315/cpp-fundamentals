#pragma once

int fibonacci_iterative(int sequence) {
    int N_element = 1;
    int N_minus_one_element = 1;
    int N_minus_two_element = 0;

    if (sequence == 0) {
        return 0;
    }

    if (sequence == 1) {
        return 1;
    }

    for (int i = 2; i <= sequence; i++) {
        N_element = N_minus_one_element + N_minus_two_element;
        N_minus_two_element = N_minus_one_element;
        N_minus_one_element = N_element;
    }

    return N_element;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
