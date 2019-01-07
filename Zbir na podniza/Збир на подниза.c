#include <stdio.h>
#include <stdlib.h>

int zbir(int *sum_pos, int ind, int suma)
{
    int i;
    for(i=0;i<ind;i++)
    {
        suma+=*(sum_pos+i);
    }
    return suma;
}

int main()
{
    int a[100],n,i,x,suma=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        suma+=a[i];
    }
    scanf("%d",&x);
    int t=zbir(a,x,0);
    if(x>n)
    {
        printf("%d",suma);
    }
    else
    {
        printf("%d",t);
    }
    return 0;
}
