#include <stdio.h>
#include <stdlib.h>

/*
Од тастатура се внесуваат два природни броја M (M > 2) и N. Да се напише програма која ќе го најде и испечати првиот број поголем од N кој има повеќе од M делители (1 и N се делители на N).
*/

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i,bm=0,bn;
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            bm++; //broj na deliteli na M
        }
    }
    int j;
    for(i=n+1;;i++)
    {
        bn=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                bn++; //broj na deliteli na N
            }

        }
        if(bn>m)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
