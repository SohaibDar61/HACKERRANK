#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float i,j; 

    scanf("%d%d\n",&x,&y);
	scanf("%f%f\n",&i,&j);

    printf("%d\t%d\n",x+y,x-y);
    printf("%0.1f\t%0.1f",i+j,i-j);
    
    
    
    return 0;
}
