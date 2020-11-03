#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int a;
  int b;
  int AndMax = 0,OrMax = 0,XorMax = 0;
  int lastvalue; 
  for (a = 1 ; a <= n; a++)
  {
      for (b = a+1; b <= n; b++)
      {
        lastvalue = a&b; 
        if (lastvalue > AndMax && lastvalue < k)
        {
            AndMax = lastvalue;
        }
      }

  }
  printf("%d\n",AndMax); 
 for (a = 1 ; a <= n; a++)
  {
      for (b = a+1; b <= n; b++)
      {
        lastvalue = a|b; 
        if (lastvalue > OrMax && lastvalue < k)
        {
            OrMax = lastvalue;
        }
      }

  }
   printf("%d\n",OrMax); 
   for (a = 1 ; a <= n; a++)
  {
      for (b = a+1; b <= n; b++)
      {
        lastvalue = a^b; 
        if (lastvalue > XorMax && lastvalue < k)
        {
            XorMax = lastvalue;
        }
      }

  }
   printf("%d",XorMax); 


}

int main() {
    int ret = 0;

    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return ret;
}
