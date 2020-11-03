#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i;
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for (i = 0; i < strlen(s); i++)
    {
        if (isspace(*(s+i)) == 0)
        {
            printf("%c",*(s+i));
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
