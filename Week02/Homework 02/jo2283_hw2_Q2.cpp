#include <iostream>
using namespace std;

//Question 2:
//Write a program that asks the user to enter an amount of money in the format of dollars and
//remaining cents. The program should calculate and print the minimum number of coins
//        (quarters, dimes, nickels and pennies) that are equivalent to the given amount

//Hint: In order to find the minimum number of coins, first find the maximum number of
//quarters that fit in the given amount of money, then find the maximum number of dimes
//        that fit in the remaining amount, and so on.

//Your program should interact with the user exactly as it shows in the following example:
//
// Please enter your amount in the format of dollars and cents separated by a space:
//4 37
//4 dollars and 37 cents are:
//17 quarters, 1 dimes, 0 nickels and 2 pennies


int main() {

    int dollars;
    int cents;
    int sum;
    int remain;
    int remain2;
    int remain3;

    int quarters;
    int dimes;
    int nickels;
    int pennies;

    cout << "Please enter your amount in the format of dollars and cents separated by a space: " << endl;
    cin >> dollars;
    cin >> cents;
    sum = (dollars * 100) + cents ; //437


    quarters = sum / 25; // output 17
    remain = sum - (quarters * 25);
    dimes = remain / 10; // output 1
    remain2 = remain - (dimes * 10);
    nickels = remain2 / 5; // output 0
    remain3 = remain2 - (nickels * 5);
    pennies = remain3 / 1; //output 2

    cout << dollars << " dollars and " << cents << " cents are:" << endl;
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies";

    return 0;
}
