#include <iostream>
using namespace std;

//Question    4:
//Write    a    program    that    reads    from    the    user    two positive    integers,    and    prints    the    result    of
//when    we add,    subtract    multiply,    divide,    div    and    mod    them.
//Your    program    should    interact    with    the    user    exactly as    it    shows    in    the    following    example:
//Please    enter    two    positive    integers,    separated    by    a    space:
//14            4
//14    +    4    =    18
//14 – 4    =    10
//14    *    4    =    56
//14    /    4    =    3.5
//14    div    4    =    3
//14    mod    4    =    2

int main() {

    double int1;
    double int2;
    int mod1;
    int mod2;


    cout << "Please enter two positive integers, separated by a space:" << endl;
    cin >> int1 >> int2;
    mod1 = int1;
    mod2 = int2;

    cout << int1 << " + " << int2 << " = " << int1 + int2 <<endl;
    cout << int1 << " - " << int2 << " = " << int1 - int2 <<endl;
    cout << int1 << " * " << int2 << " = " << int1 * int2 <<endl;
    cout << int1 << " / " << int2 << " = " << int1 / int2 <<endl;
    cout << int1 << " % " << int2 << " = " << mod1 % mod2 <<endl;
}

