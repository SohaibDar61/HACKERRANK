/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

// Create the reverse_array function
void reverse_array(int* arr, int size)
{
    for (int i = size - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int n; // Size of the array
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // If n is between 1 and 1000
    if (n >= 1 && n <= 1000)
    {
        int num_array[n];
        int i = 0; // Use that for indexing

        string num_string; // A set of int values as a string in one line
        getline(cin, num_string);

        int num; // Use this to read individual integers from the line.

        istringstream iss(num_string);

        while (iss >> num)
        {
            if (num >= 1 && num <= 10000)
            {
                num_array[i] = num;
                ++i;
            }
        }

        reverse_array(num_array, n);
    }

    return 0;
}

