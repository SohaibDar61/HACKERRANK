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

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // Set up the vector
    string n, numbers, num_range;
    getline(cin, n);
    getline(cin, numbers);
    istringstream ss(numbers);
    int num;
    vector<int> v(stoi(n));

    for (int i = 0; ss >> num; i++)
        v[i] = num;

    // Erase single element
    string x;
    getline(cin, x);
    v.erase(v.begin() + stoi(x) - 1);

    // Erase a range of numbers
    getline(cin, num_range);
    istringstream ss_range(num_range);
    int range_start, range_end;
    ss_range >> range_start >> range_end;

    v.erase(v.begin() + range_start - 1, v.begin() + range_end - 1);
    int v_size = v.size();

    cout << v_size << endl;

    for (int i = 0; i < v_size; i++)
        cout << v.at(i) << " ";

    return 0;
}
