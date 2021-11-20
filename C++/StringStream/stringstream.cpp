/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> v;
    stringstream ss(str);

    int n;
    char skip;

    while (ss) {
        if (ss >> n) v.push_back(n);
        ss >> skip;
    }

    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}