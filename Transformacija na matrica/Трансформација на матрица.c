#include <stdio.h>
#include <stdlib.h>

/*
Од стандарден влез се внесува природен број n (n > 2), како и квадратна матрица А од ред n, чии елементи се цели броеви.

Матрицата да се трансформира така што елементите НАД главната дијагонала ќе ја земат вредноста на максималниот елемент над главната дијагонала, а елементите ПОД главната дијагонала ќе ја земат вредноста на најмалиот елемент под главната дијагонала.
*/

int main()
{
    int n,i,j,suma=0,max,min,first1=1,first2=1;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(j>i)
            {
                if(first2)
                {
                    max=a[i][j];
                    first2=0;
                }
                else
                {
                    if(a[i][j]>max)
                    {
                        max=a[i][j];
                    }
                }
            }
            if(j<i)
            {
                if(first1)
                {
                    first1=0;
                    min=a[i][j];
                }
                else
                {
                    if(min>a[i][j])
                    {
                        min=a[i][j];
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                a[i][j]=max;
            }
            if(j<i)
            {
                a[i][j]=min;
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
