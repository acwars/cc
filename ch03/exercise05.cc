// Write a program that requests the user to enter the current world population and
// the current population of the U.S. (or of some other nation of your choice). Store
// the information in variables of type long long . Have the program display the per-
// cent that the U.S. (or other nation’s) population is of the world’s population.The
// output should look something like this:
// Enter the world's population: 6898758899
// Enter the population of the US: 310783781
// The population of the US is 4.50492% of the world population.
 
// You can use the Internet to get more recent figures.

#include <iostream>

int main(int argc, char **argv){

    long long world_population;
    long long us_population;
    double rate;

    std::cout   <<  "Enter the world's population: ";
    std::cin    >>  world_population;

    std::cout   <<  "Enter the population of the US: ";
    std::cin    >>  us_population;

    rate = (double)(us_population) / (double)(world_population) * 100.0;

    std::cout   <<  "The population of the US is "  <<  rate    <<  "% " <<  "of the world population."    <<  std::endl;

    return 0;
}
