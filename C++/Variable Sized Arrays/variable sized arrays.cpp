/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    cin.ignore();
    vector<vector<int>> a(n);

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        istringstream ss(line);

        // First number is the size of k
        int k_size, k_item;
        ss >> k_size;
        vector<int> k(k_size, 0);
        // Populate k array
        for (int j = 0; j < k_size; j++) {
            ss >> k_item;
            // Don't use push_back()
            k[j] = k_item;
        }

        // Add k to the array a. Don't use push_back().
        a[i] = k;
    }

    // Read the rest of the queries
    for (int i = 0; i < q; i++) {
        string query;
        getline(cin, query);
        istringstream ss(query);

        // Get the location in the vector
        int x, y;
        ss >> x >> y;
        cout << a[x][y] << endl;
    }
       
    return 0;
}
