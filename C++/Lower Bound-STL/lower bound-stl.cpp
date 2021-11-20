/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long n, temp, q, query;
    cin >> n;
    vector<long> v;

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        v.push_back(temp);
    }

    cin >> q;

    for (int i = 0; i < q; ++i) {
        cin >> query;
        vector<long>::iterator itr = lower_bound(v.begin(), v.end(), query);
        if (query != *itr) {
            cout << "No " << (itr - v.begin() + 1) << endl;
        }
        else {
            cout << "Yes " << (itr - v.begin() + 1) << endl;
        }
    }

    return 0;
}
