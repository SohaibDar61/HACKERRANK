/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 *
 * Some headers were removed/modified.
 */

#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string n, user_input;
    getline(cin, n);
    getline(cin, user_input);

    stringstream ss(user_input);
    vector<int> v(stoi(n));

    int v_size = v.size();

    int x;
    for (int i = 0; i < v_size; i++) {
        ss >> x;
        v[i] = x;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v_size; i++) {
        cout << v.at(i) << " ";
    }

    return 0;
}
