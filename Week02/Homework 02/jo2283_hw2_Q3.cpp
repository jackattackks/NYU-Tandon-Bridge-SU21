#include <iostream>
using namespace std;

//Question 3:
//Suppose John and Bill worked for some time and we want to calculate the total time both of
//        them worked. Write a program that reads number of days, hours, minutes each of them
//        worked, and prints the total time both of them worked together as days, hours, minutes.

//Hint: Try to adapt the elementary method for addition of numbers to this use.
//Your program should interact with the user exactly as it shows in the following example:

// Please enter the number of days John has worked: 2
//Please enter the number of hours John has worked: 12
//Please enter the number of minutes John has worked: 15

//Please enter the number of days Bill has worked: 3
// Please enter the number of hours Bill has worked: 15
// Please enter the number of minutes Bill has worked: 20

//The total time both of them worked together is: 6 days, 3 hours and 35 minutes.


//FAILED TEST CASES
//Fails test case in which both people work 59 minutes. Output should be 0d1h58m.
//
//Fails test case in which John works 1d12h40m and Bill works 1d11h30m. Output should be 3d0h10m.

const int daysToHours = 24;
const int hoursToMinutes = 60;

int main() {
    int DaysJ;
    int HoursJ;
    int MinJ;

    cout << "Please enter the number of days John has worked: ";
    cin >> DaysJ;
    cout << "Please enter the number of hours John has worked: ";
    cin >> HoursJ;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> MinJ;
    cout << endl;

    int DaysB;
    int HoursB;
    int MinB;

    cout << "Please enter the number of days Bill has worked: ";
    cin >> DaysB;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> HoursB;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> MinB;
    cout << endl;

    int totalDays = DaysJ+DaysB;
    int totalHours = HoursJ+HoursB;
    int totalMinutes = MinJ+MinB;
    
    totalHours += totalMinutes/hoursToMinutes;
    totalMinutes %= hoursToMinutes;
    totalDays += totalHours / daysToHours;
    totalHours %= daysToHours;


    cout << "The total time both of them worked together is: " << totalDays << " days, " << totalHours << " hours and "
    << totalMinutes  << " minutes.";
    
    return 0;
}
