/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    unsigned int a, b;
    char const* num = "hi";
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            switch (i) {
            case 1:
                num = "one";
                break;
            case 2:
                num = "two";
                break;
            case 3:
                num = "three";
                break;
            case 4:
                num = "four";
                break;
            case 5:
                num = "five";
                break;
            case 6:
                num = "six";
                break;
            case 7:
                num = "seven";
                break;
            case 8:
                num = "eight";
                break;
            case 9:
                num = "nine";
                break;
            }
        }
        else if (i > 9) {
            if (i % 2 == 0) {
                num = "even";
            }
            else {
                num = "odd";
            }
        }
        cout << num << endl;
    }
    return 0;
}

