// Write a program that asks the user to enter the number of seconds as an integer
// value (use type long , or, if available, long long ) and that then displays the equiva-
// lent time in days, hours, minutes, and seconds. Use symbolic constants to represent
// the number of hours in the day, the number of minutes in an hour, and the number
// of seconds in a minute.The output should look like this:
// Enter the number of seconds: 31600000
// 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

#include <iostream>

int main(int argc, char **argv){
    
    const int seconds_per_minute = 60;
    const int minutes_per_hour = 60;
    const int hours_per_day = 24;

    long long seconds;

    int days, hours, minutes;

    std::cout   <<  "Enter the number of seconds: ";
    std::cin    >>  seconds;
    
    days = seconds / seconds_per_minute / minutes_per_hour / hours_per_day;
    
    hours = seconds / seconds_per_minute / minutes_per_hour % hours_per_day;
    
    minutes = seconds / seconds_per_minute % minutes_per_hour;

    std::cout   <<  seconds <<  " seconds = "   <<  days    <<  " days "    <<  hours   <<  " hours "   <<  minutes <<  " minutes ";

    seconds %= seconds_per_minute;

    std::cout   <<  seconds <<  " seconds " <<  std::endl;


    return 0;
}
