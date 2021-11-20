/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

/* Enter your code here. */
try {
    int res = Server::compute(A, B);
    cout << res << endl;
}
catch (const std::bad_alloc& mem) {
    cout << "Not enough memory" << endl;
}
catch (const std::invalid_argument& arr) {
    cout << "Exception: " << arr.what() << endl;
}
catch (const std::exception& e) {
    cout << "Exception: " << e.what() << endl;
}
catch (const int& e) {
    cout << "Other Exception" << endl;
}