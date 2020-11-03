#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int ret = 0;
    int n;
    int sum = 0;
    scanf("%d", &n);
    
    do 
    {
        sum += (n % 10);
        n /= 10; 
    }
    while (n > 0);

    printf("%d",sum);
    return ret;
}
