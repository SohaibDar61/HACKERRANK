/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 */

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

// Enter your code here.
ostream& operator<<(ostream& out, Person& p) {
    out << "first_name=" << p.get_first_name() << ","
        << "last_name=" << p.get_last_name();
    return out;
}

