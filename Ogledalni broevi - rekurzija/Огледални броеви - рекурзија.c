#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int f(int x, int y, int a[], int br)
{
    if(x>=y)
    {
        if(!br)
        {
            printf("NEMA");
            return 0;
        }
        return 0;
    }
    if(a[x]==a[y])
    {
        br++;
        printf("%d ",a[x]);
        return f(x+1,y-1,a,br);
    }
    return f(x+1,y-1,a,br);
}

int main()
{
    int i,j,a[MAX]={0},n,t,k,pom;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        for(j=0;j<t;j++)
        {
            scanf("%d",&a[j]);
        }
        f(0,t-1,a,0);
        printf("\n");
        for (int k = 0; k < t; ++k)
        {
            a[k] = 0;
        }
    }
    return 0;
}
