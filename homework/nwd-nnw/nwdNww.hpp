#pragma once

int NWD(int lhs, int rhs) {
    int a = abs(lhs);
    int b = abs(rhs);
    int temp = 0;

    if ((lhs == 0 && rhs == 1) || (lhs == 1 && rhs == 0)) {
        return 1;
    }

    if (lhs == 0 && rhs == 0) {
        return 0;
    }

    while (a % b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    return b;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    return -1;
}
