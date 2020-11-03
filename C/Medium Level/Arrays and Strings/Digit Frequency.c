#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int ret = 0;

    char *sen; 
    sen = malloc (1024 * sizeof(char));
    gets(sen);
    sen = realloc (sen, strlen(sen)+1);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        *(arr+i) = 0;
    }
    for (int i = 0; i < strlen(sen); i++)
    {
         if(*(sen+i) >= '0' && *(sen+i) <= '9') {
            arr[(int)(*(sen+i) - '0')]++;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    free(sen);
    
    return ret;
}
