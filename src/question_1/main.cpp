#include <iostream>
#include <string>

int main() {
    char choice;
    double gpa;

    do {
        std::cout << "Enter your GPA (0 to 4): ";
        std::cin >> gpa;

        if (gpa >= 0 && gpa <= 4) {
            std::string grade = gpa_to_letter_grade(gpa);
            std::cout << "Your letter grade is: " << grade << std::endl;
        } else {
            std::cout << "Please enter a valid GPA between 0 and 4." << std::endl;
        }

        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}