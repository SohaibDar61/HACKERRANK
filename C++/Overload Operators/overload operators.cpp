/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *

/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */
// Overload operators + and << for the class complex
// + should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
// << should print a complex number in the format "a+ib"

Complex operator+(Complex& x, Complex& y) {
    Complex c;
    c.a = x.a + y.a;
    c.b = x.b + y.b;
    return c;
}

ostream& operator<<(ostream& out, Complex& c) {
    out << c.a << "+i" << c.b;
    return out;
}
