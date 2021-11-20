/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string input;
    getline(cin, input);

    int sum = 0;
    int num;

    istringstream iss(input);
    while (iss >> num) {
        sum += num;
    }

    cout << sum;
    return 0;
}
