//carrots.cpp--food processing program
//uses and displays a variable

#include <iostream>

int main()
{
    int carrots;    //declare an integer variable

    carrots = 25;   //assign a value to the variable
    std::cout << "I have ";
    std::cout << carrots;   //display the value of the variable
    std::cout << " carrots.";
    std::cout << std::endl;
    carrots = carrots -1;   //modify the variable
    std::cout << "Crunch, crunch. Now I have " << carrots << " carrots." << std::endl;
    return 0;

}
