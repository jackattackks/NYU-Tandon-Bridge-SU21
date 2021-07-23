#include <iostream>
using namespace std;

//Question 1:
//Write a program that asks the user to enter a number of quarters, dimes, nickels and
// pennies and then outputs the monetary value of the coins in the format of dollars and
//remaining cents

//Your program should interact with the user exactly as it shows in the following example:
// Please enter number of coins:
//# of quarters: 13
//# of dimes: 4
//# of nickels: 11
//# of pennies: 17
//The total is 4 dollars and 37 cents
//4. You can work and submit in groups of up to 4 people.
// If submitting as a group, make sure to associate all group members
// to the submission on gradescope.


int main() {

    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int sum;
    int cents;
//    user input
    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters: ";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;

    sum = (quarters * .25) + (dimes * .10) + (nickels * .05) + (pennies * .01);
//    output 4
    cents = (((quarters * .25) + (dimes * .10) + (nickels * .05) + (pennies * .01)) - sum) * 100;
//    output 37

    cout << "The total is " << sum << " dollars and " << cents << " cents.";

}
