// Write a program that asks how many miles you have driven and how many gallons
// of gasoline you have used and then reports the miles per gallon your car has gotten.
// Or, if you prefer, the program can request distance in kilometers and petrol in liters
// and then report the result European style, in liters per 100 kilometers.

#include <iostream>

int main(int argc, char **argv){
    
    double miles, gasoline, mpg;

    std::cout   <<  "Enter the number of miles you've driven: ";
	std::cin    >>  miles;

	std::cout   <<  "Enter the gallons of gasoline consumed: ";
	std::cin    >>  gasoline;

    std::cout   <<  "Your car can run "  <<  miles / gasoline    <<  " miles per gallon "    <<  std::endl;
    
    std::cout   <<  "In European style: your car can run "  <<  (100 * gasoline) / miles<<  " liters of petrol per 100 kilometers"  << std::endl;
    

    return 0;
}
