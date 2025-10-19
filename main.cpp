/* Leah Cochrum-Helbach
 * RedID: 828316587
 * 10/17/2025
 */

/* Tasks:
 *  Call add() with integers, doubles, and strings
 *  Show the output for each
 *  Explain how templates make code reusable
 *          --> they allow a function to be applied to many different types so
 *              that you don't have to rewrite a function for each different type
 */

#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    const int firstInt = 34;
    const int secondInt = 33;

    int intResult = add(firstInt, secondInt);
    cout << "Integer addition: " << intResult << endl;

    const double firstDouble = 3.5;
    const double secondDouble = 3.2;

    double doubleResult = add(firstDouble, secondDouble);
    cout << "Double addition: " << doubleResult << endl;

    const string firstString = "This is ";
    const string secondString = "a String";

    string stringResult = add(firstString, secondString);
    cout << "String addition: " << stringResult << endl;

    return 0;
}