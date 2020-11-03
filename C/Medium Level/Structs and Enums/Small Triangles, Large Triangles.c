#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	
    int *ptr = (int*) malloc(n * sizeof(int));
    float p; 
    for (int i = 0; i < n; i++)
    {
        p = (tr[i].a+tr[i].b+tr[i].c)/2.0;
        *(ptr+i) = (p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c)); 
    }

    for (int i = 1; i < n; i++)
    {
        int val = *(ptr+i);
        int j = i - 1; 
        while (j >= 0 && val < *(ptr+j))
        {
        
            *(ptr+j+1) = *(ptr+j);
            int temp=*(ptr+j);
            *(ptr+j)=*(ptr+j+1);
            *(ptr+j+1)=temp;

            temp=tr[j].a;
            tr[j].a=tr[j+1].a;
            tr[j+1].a=temp;
            temp=tr[j].b;
            tr[j].b=tr[j+1].b;
            tr[j+1].b=temp;
            temp=tr[j].c;
            tr[j].c=tr[j+1].c;
            tr[j+1].c=temp;
            --j; 
        }
        *(ptr+j+1) = val;
    }

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
