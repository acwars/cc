// Write a short program that asks for your height in integer inches and then converts
// your height to feet and inches. Have the program use the underscore character to
// indicate where to type the response.Also use a const symbolic constant to repre-
// sent the conversion factor.

#include <iostream>

int main(int argc, char **argv){

    const int inches_per_feet = 12;
    
    int inches, feet, inch;


    std::cout << "Please enter your height: ___\b\b\b";
    std::cin >> inches;

    feet = inches / inches_per_feet;
    inch = inches % inches_per_feet;

    std::cout << "your height is " << feet << " feet " << inch << " inch " << std::endl;

    return 0;
}
