/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

#include <iostream>
#include <string>

using namespace std;

struct Student {
    int age, standard;
    string first_name, last_name;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}

