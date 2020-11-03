#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
        //int temp;
    int *up_ptr;
    int *low_ptr = arr;
    int in_dex;
    in_dex = num - 1;
    up_ptr = (arr + in_dex);


    while (low_ptr < up_ptr)
    {
        *low_ptr ^= *up_ptr;
        *up_ptr ^= *low_ptr;
        *low_ptr ^= *up_ptr;
        up_ptr--;
        low_ptr++;
    }

    for(i = 0; i < num; i++)
    {
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}
