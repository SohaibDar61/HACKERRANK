/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;


int main() {
    // How many queries to run
    int query_number;
    cin >> query_number;

    map<string, int> m;

    // The for loop to handle the queries
    for (int i = 0; i <= query_number; i++) {
        string query, student_name;
        int query_type, mark;
        getline(cin, query);

        // Updating the variables from the query
        istringstream ss(query);
        ss >> query_type;

        if (query_type == 1)
        {
            ss >> student_name >> mark;
            // Check if the student exists
            map<string, int>::iterator check = m.find(student_name);
            if (check == m.end()) m.insert({ student_name, mark });
            else
                // If the student exists, add the mark
                check->second += mark;
        }

        else
        {
            ss >> student_name;
            map<string, int>::iterator itr = m.find(student_name);
            if (query_type == 2) {
                // Delete student
                if (itr != m.end()) m.erase(student_name);
            }
            else if (query_type == 3)
            {
                if (itr != m.end()) cout << itr->second << endl;
                else cout << 0 << endl;
            }
        }
    }

    return 0;
}
