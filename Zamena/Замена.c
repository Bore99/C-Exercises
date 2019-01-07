#include <stdio.h>
#define MAX 100

int swap(int *a, int *b)
{
    int pom=*a;
    *a=*b;
    *b=pom;
}

int array_swap(int *a, int n)
{
    int i,j,br;
    for(i=0;i<n-1;i++)
    {
        br=1;
        for(j=2;j<*(a+i+1);j++)
        {
            if(*(a+i)%j==0&&*(a+i+1)%j==0)
            {
                br=0;
            }
        }
        if(br && *(a+i+1)!=0 && *(a+i)!=0)
        {
            swap(a+i,a+i+1);
            i++;
        }
    }
}
int main() {
	int a[MAX];
    int n,i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
		scanf("%d", &a[i]);
    }

    array_swap(a,n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
