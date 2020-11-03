#include <stdio.h>

int main ()
{
    int ret = 0;

    char s[100];
    fgets(s, sizeof(s), stdin);
    printf("Hello, World!\n%s", s);
    
    return ret;
}
