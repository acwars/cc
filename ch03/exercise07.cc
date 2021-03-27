// Write a program that asks you to enter an automobile gasoline consumption figure
// in the European style (liters per 100 kilometers) and converts to the U.S. style of
// miles per gallon. Note that in addition to using different units of measurement, the
// U.S. approach (distance / fuel) is the inverse of the European approach (fuel / dis-
// tance). Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
// mpg is about 12.4 1/100 km, and 27 mpg is about 8.7 1/100 km.

#include <iostream>

int main(int argc, char **argv){

    const double kilometers_per_miles = 62.14;
    const double gallon_per_liters = 3.875;

    double european_style;

    std::cout   <<  "Enter the automobile gasoline consumption figure in "  <<  "Europeanstyle(liters per 100 kilometers): ";
    std::cin    >>  european_style;

    std::cout   <<  "Converts to U.S. style(miles per gallon): "    <<  kilometers_per_miles * gallon_per_liters / european_style   <<  std::endl;

    return 0;
}
