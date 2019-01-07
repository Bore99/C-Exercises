#include <stdio.h>
#include <stdlib.h>

/*
Да се напише рекурзивна функција која што ќе го одреди максималиот елемент во една низа.

На почеток од стандарден влез се вчитува број N и потоа се вчитуваат N броеви во низата.

На излез да се испечати максималниот елемент во таа низа.
*/

int max_element(int a[], int n, int i, int max)
{
    if(max<a[i])
    {
        max=a[i];
        return max_element(a,n,i+1,max);
    }
    if (i==(n-1))
    {
        return max;
    }
    return max_element(a,n,i+1,max);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",max_element(a,n,1,a[0]));
    return 0;
}
