#include <stdio.h>
#define MAX 400


void sort(int *a, int n)
{
 	int i,j,pom;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                pom=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=pom;
            }
        }
    }
}

void merge(int *a, int *b, int *c, int n)
{
    int i,j,pom;
    for(i=0;i<n;i++)
    {
        *(c+i)=*(a+i);
    }
    i=0;
    for(j=n;j<2*n;j++)
    {
        *(c+j)=*(b+i);
        i++;
    }
    for(i=0;i<2*n;i++)
    {
        for(j=i+1;j<2*n;j++)
        {
            if(*(c+i)>*(c+j))
            {
                pom=*(c+i);
                *(c+i)=*(c+j);
                *(c+j)=pom;
            }
        }
    }
}

int main() {
    int n;
    int a[MAX];
    int b[MAX];
    int c[MAX];
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; ++i) {
        scanf("%d", &b[i]);
    }
    sort(a, n);
    sort(b, n);
    /*for(i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i = 0; i < n; ++i) {
        printf("%d ", b[i]);
    }
    printf("\n");*/
    merge(a, b, c, n);
    for(i = 0; i < 2 * n; ++i) {
        printf("%d ", c[i]);
    }
    return 0;
}
