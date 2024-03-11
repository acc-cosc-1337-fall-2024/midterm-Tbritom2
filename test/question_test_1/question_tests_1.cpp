#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

int main() {
    double gpa;
    char choice;

    do {
        std::cout << "Enter your GPA (0 to 4): ";
        std::cin >> gpa;

        if (gpa >= 0 && gpa <= 4) {
            std::string letter_grade = gpa_to_letter_grade(gpa);
            std::cout << "Your letter grade is: " << letter_grade << std::endl;
        } else {
            std::cout << "Please enter a valid GPA between 0 and 4." << std::endl;
        }

        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}