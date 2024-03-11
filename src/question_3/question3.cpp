#include "question3.h"

int get_fib_sequence(int n) {
    if (n <= 0 || n > 15) {
        return -1; 
    }

    int a = 0, b = 1, c;
    if (n == 1) {
        return a;
    } else if (n == 2) {
        return b;
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}