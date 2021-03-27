// Write a short program that asks for your height in feet and inches and your weight
// in pounds. (Use three variables to store the information.) Have the program report
// your body mass index (BMI).To calculate the BMI, first convert your height in feet
// and inches to your height in inches (1 foot = 12 inches).Then convert your height
// in inches to your height in meters by multiplying by 0.0254.Then convert your
// weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
// your BMI by dividing your mass in kilograms by the square of your height in
// meters. Use symbolic constants to represent the various conversion factors.

#include <iostream>

int main(int argv, char **argc){

    const double inches_per_feet = 12;
    const double inches_per_meters = 0.0254;
    const double pounds_per_kg = 2.2;
    
    double bmi, feet, inches, pounds, weight, height;

    std::cout << "Please enter your height(feet): ";
    std::cin >> feet;
    
    std::cout << "Please enter your height(inches): ";
    std::cin >> inches;

    std::cout << "Please enter your weight: ";
    std::cin >> pounds;

    height = (inches + (feet * inches_per_feet)) * inches_per_meters;
    weight = pounds / pounds_per_kg;

    bmi = weight / (height * height);

    std::cout << "Your bmi is " << bmi << std::endl;


    return 0;
}
