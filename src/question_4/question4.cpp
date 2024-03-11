#include "question4.h"
#include "main.cpp"

string get_factorial_sequence(int n) {
    if (n < 1 || n > 10) {
        return "Invalid input. Please enter a number between 1 and 10.";
    }

    long long factorial = 1;
    string sequence = "1";
    for (int i = 2; i <= n; i++) {
        factorial *= i;
        sequence += "x" + to_string(i);
    }

    sequence += "=" + to_string(factorial);
    return sequence;
}