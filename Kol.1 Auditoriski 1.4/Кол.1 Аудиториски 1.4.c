#include <stdio.h>
#include <stdlib.h>

/*
Од тастатура се внесува цел број m, а потоа непознат број цели броеви. Да се испечатат 
должините на секвенците составени од најмалку два последователни броеви за кои истовремено важи:
	-следниот број е строго поголем од претходниот и
	-секој од нив има точно m цифри
Задачата да се реши без користење на низи.
*/

int main()
{
    int m,a,b,bra=0,brb=0,br=0,i;
    scanf("%d",&m);
    scanf("%d",&a);
    while(scanf("%d",&b))
    {
        for(i=a;i>0;i/=10) //cifri na a
        {
            bra++;
        }
        for(i=b;i>0;i/=10) //cifri na b
        {
            brb++;
        }
        if(bra==m && brb==m && a<b)
        {
            br++;
            a=b;
            bra=brb=0;
        }
        else
        {
            if(br>0)
            {
                printf("Dolzina:%d\n",br+1);
                a=b;
                bra=brb=br=0;
                continue;
            }
            else
            {
                a=b;
                bra=brb=br=0;
                continue;
            }
        }
    }
    if(br>0)
    {
        printf("Dolzina:%d",br+1);
    }
    return 0;
}
