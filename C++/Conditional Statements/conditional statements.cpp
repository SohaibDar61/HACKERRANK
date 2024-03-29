/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if (n >= 1) {
        if (n == 1) {
            cout << "one";
        }
        else if (n == 2) {
            cout << "two";
        }
        else if (n == 3) {
            cout << "three";
        }
        else if (n == 4) {
            cout << "four";
        }
        else if (n == 5) {
            cout << "five";
        }
        else if (n == 6) {
            cout << "six";
        }
        else if (n == 7) {
            cout << "seven";
        }
        else if (n == 8) {
            cout << "eight";
        }
        else if (n == 9) {
            cout << "nine";
        }
        else {
            cout << "Greater than 9";
        }
    }
    return 0;
}
