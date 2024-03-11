#include <iostream>
#include "question2.h"
#include "question2.cpp"
#include <limits>
int main() {
    char choice;
    double sales;

    do {
        std::cout << "Enter sales amount: ";
        std::cin >> sales;

        if (std::cin.fail()) {
            std::cin.clear(); // clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
            continue;
        }

        double commission = get_sales_commission(sales);
        std::cout << "Sales of " << sales << " yields a commission of $" << commission << std::endl;

        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}