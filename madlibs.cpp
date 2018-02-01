//Authors: Zakary Kuns 
#include <iostream>
#include <string>

int main()
{

        int number;
        std::string student;
        double GPA;
        char grade;
        
        std::cout << "Enter a name" << std::endl;
        std::cin >> student;
        std::cout << "Enter a number" << std::endl;
        std::cin >> number;
        std::cout << "Enter a decimal number 0-4" << std::endl;
        std::cin >> GPA;
        std::cout << "Enter a letter A-F" << std::endl;
        std::cin >> grade;

        
        std::cout << "Mr. Buffardi had a favorite student named " << student << "." << std::endl;
        std::cout << "He was number " << number << " in the class." << std::endl;
        std::cout << "This was because he got a " << grade << " in Mr. Buffardi's programming class and also maintains a " << GPA << " GPA." << std::endl;


        return 0;
}
