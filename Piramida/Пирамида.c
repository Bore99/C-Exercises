#include <stdio.h>
#include <stdlib.h>

/*
Од стандарден влез се чита цел број N, кој претставува висината на пирамидата, заедно со еден цел број со вредност 0 или 1 кој означува дали пирамидата треба да биде превртена или не. 

Ваша задача е на екран да испечатите пирамида составена од карактерот * со N нивоа, притоа нивоата на пирамидата да се центрираат со карактери за празно место.
*/
int main()
{
    int m,n,i,j,k,tmpj,tmpk;
    scanf("%d %d",&n,&m);
    if(m==0)
    {
        j=n-1;
        tmpj=j;
        k=1;
        tmpk=k;
        for(i=1;i<=n;i++)
        {
            for(;j;j--)
            {
                printf(" ");
            }
            for(;k;k--)
            {
                printf("*");
            }
            j=tmpj;
            for(;j;j--)
            {
                printf(" ");
            }
            printf("\n");
            j=tmpj-1;
            k=tmpk+2;
            tmpj--;
            tmpk+=2;
        }
    }
    if(m==1)
    {
        k=2*n-1;
        tmpk=k;
        j=0;
        tmpj=j;
        for(i=1;i<=n;i++)
        {
            for(;j;j--)
            {
                printf(" ");
            }
            for(;k;k--)
            {
                printf("*");
            }
            j=tmpj;
            for(;j;j--)
            {
                printf(" ");
            }
            if(k==1)
            {
                break;
            }
            printf("\n");
            k=tmpk-2;
            j=tmpj+1;
            tmpk--;
            tmpk--;
            tmpj++;
        }
    }
    return 0;
}
