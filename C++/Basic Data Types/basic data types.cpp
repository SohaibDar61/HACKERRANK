/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;

    cout << i << '\n'
        << l << '\n'
        << c << '\n'
        << fixed << setprecision(3) << f << '\n'
        << fixed << setprecision(9) << d << endl;
    return 0;
}