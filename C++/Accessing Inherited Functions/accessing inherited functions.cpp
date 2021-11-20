/* Author: Sohaib Dar
 * 
 * Last verified on: May 17, 2021
 *
/* IMPORTANT:
 * This code is meant to be used as a solution on HackerRank.
 * It is not meant to be executed as a standalone program.
 */

class D : public A, public B, public C
{

    int val;
    
    public:
    //Initially val is 1
    D()
    {
        val = 1;
    }


    //Implement this function
    void update_val(int new_val)
    {
        while (new_val % 2 == 0) {
            new_val /= 2;
            A::func(val);
        }

        while (new_val % 3 == 0) {
            new_val /= 3;
            B::func(val);
        }

        while (new_val % 5 == 0) {
            new_val /= 5;
            C::func(val);
        }

    }
    //For Checking Purpose
    void check(int); //Do not delete this line.
};