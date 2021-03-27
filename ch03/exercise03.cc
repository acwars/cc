// Write a program that asks the user to enter a latitude in degrees, minutes, and sec-
// onds and that then displays the latitude in decimal format.There are 60 seconds of
// arc to a minute and 60 minutes of arc to a degree; represent these values with sym-
// bolic constants.You should use a separate variable for each input value.A sample
// run should look like this:
// Enter a latitude in degrees, minutes, and seconds:
// First, enter the degrees: 37
// Next, enter the minutes of arc: 51
// Finally, enter the seconds of arc: 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

#include <iostream>


int main(int argc, char **argv){
    
    const double seconds_per_minute = 60;
    const double minutes_per_degree = 60;

    double degrees, minutes, seconds;

    std::cout   <<  "Enter a latitude in degrees, minutes, and second: "    <<  std::endl;
    std::cout   <<  "First, enter the degrees: ";
    std::cin    >>  degrees;
    std::cout   <<  "Next, enter the minutes of arc: ";
    std::cin    >>  minutes;
    std::cout   <<  "Finally, enter the seconds of arc: ";
    std::cin    >>  seconds;

    std::cout   <<  degrees <<  " degrees, " <<  minutes <<  " minutes, " <<  seconds <<  " seconds = ";

    minutes /=  minutes_per_degree;
    seconds =   (seconds / seconds_per_minute) / minutes_per_degree;
    degrees = degrees + minutes + seconds;

    std::cout   << degrees  <<  " degrees " <<  std::endl;
    

    return 0;
}
