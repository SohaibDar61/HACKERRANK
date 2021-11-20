/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    // Swapping of first characters
    char temp = a[0];

    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << endl;

    return 0;
}

