#include <stdio.h>
#include <stdlib.h>

/*
Од стандарден елемент се вчитуваат број N и елементите во квадратна матрица (NxN).

Дадената матрица да се трансформира на начин што секој елемент во неа ќе биде заменет со сумата на елементите на дијагоналата во која што припаѓа. Дијагоналите треба да бидат паралелни на главната дијагонала.

Пример, матрицата:

1  2  3  4  5
2  3  4  5  6
0  1  1  2  5
5  5  5  5  5
7  8  9  7  7

би се трансформирала во следната матрица:

17 13 13 10 5
15 17 13 13 10
14 15 17 13 13
13 14 15 17 13
7  13 14 15 17
*/

int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n][n];
    int top_sum[100]={0};
    int bottom_sum[100]={0};
    int middle_sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int k,t;
    for(i=0;i<n;i++)
    {
        k=0;
        t=i;
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                top_sum[k]+=a[i][j];
                k++;
            }
            if(i==j)
            {
                middle_sum+=a[i][j];
            }
            if(i>j)
            {
                bottom_sum[t]+=a[i][j];
                t--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        k=0;
        t=i;
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                a[i][j]=top_sum[k];
                k++;
            }
            if(i==j)
            {
                a[i][j]=middle_sum;
            }
            if(i>j)
            {
                a[i][j]=bottom_sum[t];
                t--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
