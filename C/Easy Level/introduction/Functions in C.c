#include <stdio.h>

int max_of_four (int a,int b,int c,int d)
{
    int ret = 0;
    if (a > b && a > c && a > d)
    {
        ret = a;
        return ret;
    }
    else if (b > a && b > c && b > d)
    {
        ret = b;
        return ret;
    }
    else if (c > b && c > a && c > d)
    {
        ret = c;
        return ret;
    }
    else 
    {   
        ret = d;
        return ret;
    }
}

int main() {

    int ret = 0;

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return ret;
}
