#include <stdio.h>

int main (void)
{
    int ret = 0;

    const char *arr[] = {"one","two","three","four","five","sex","seven","eight","nine"};
    int  n; 
    scanf("%d",&n); 

    if (n < 1) { return 1;}

    if (n >= 1 && n <= 9)
    {
        printf("%s",arr[n-1]); 
    }
    else
    {
        printf("Greater than 9");
    }

    return ret;
}
