#include <iostream>
#include "question4.h"

using namespace std;


int main() {
    int choice, n;

    do {
        cout << "Enter a number (1-10) to find its factorial sequence (enter 0 to exit): ";
        cin >> n;
        
        if (n < 0 || n > 10) {
            cout << "Invalid input. Please enter a number between 1 and 10." << endl;
            continue;
        }
        
        if (n == 0) {
            cout << "Exiting the program..." << endl;
            break;
        }
        
        string factorial_sequence = get_factorial_sequence(n);
        cout << "Factorial sequence for " << n << ": " << factorial_sequence << endl;
        
    } while (true);

    return 0;
}