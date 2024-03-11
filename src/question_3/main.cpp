#include "question3.h"
#include <iostream>

using namespace std; 

int main()
{
    int n;

    cout << "Enter a number (1-15) to find its Fibonacci number: ";
    cin >> n;
 
    if (n < 1 || n > 15) {
        cout << "Invalid input. Please enter a number between 1 and 15." << endl;
        return 1; // Return error code
    }


    int fib_number = get_fib_sequence(n);

    cout << "Fibonacci number for " << n << ": " << fib_number << endl;

    return 0;
}