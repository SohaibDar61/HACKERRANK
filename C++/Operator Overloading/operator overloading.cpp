/* Author: Sohaib Dar
 * 
 * Last verified on: May 19, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

class Matrix {
public:
    vector<vector<int>> a;
    Matrix() {}

    Matrix operator+(Matrix& other) {
        for (int i = a.size() - 1; i >= 0; --i) {
            for (int j = a[0].size() - 1; j >= 0; --j) {
                a[i][j] += other.a[i][j];
            }
        }
        return *this;
    }
};
