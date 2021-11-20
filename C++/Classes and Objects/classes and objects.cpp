/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

// Write your Student class here
class Student {
private:
    int scores_array[5];
public:
    /* Constructor */
    Student() {}

    void input() {
        int score;
        for (int i = 0; i < 5; i++) {
            cin >> score;
            scores_array[i] = score;
        }
    }

    int calculateTotalScore() {
        int sum = 0;
        int array_length = sizeof(scores_array) / sizeof(scores_array[0]);
        for (int i = 0; i < array_length; i++) {
            sum += scores_array[i];
        }
        return sum;
    }

    /* Destructor */
    ~Student() {}
};
