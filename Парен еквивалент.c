#include <stdio.h>
#include <stdlib.h>

/*
Од тастатура се читаат 2 позитивни цели броеви.
Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.

Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.

Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции
од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.

Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1) */

int main()
{
    int golem,mal,tmp,i,j=0,k=0;
    scanf("%d %d",&golem,&mal);
    if(golem<mal)
    {
        tmp=golem;
        golem=mal;
        mal=tmp;
    }
    tmp=mal;
    for(i=golem;i;i/=10,j++)
    {
        if(j==0 || j%2==0)
        {
           continue;
        }
        else
        {
            if((i%10)==(mal%10))
            {
                mal/=10;
                k++;
            }
            else
            {
                k=0;
                break;
            }
        }
    }
    mal=tmp;
    if(k!=0&&golem>0 && mal>0)
    {
        printf("PAREN");
    }
    else
    {
        if(k==0 && golem>0 && mal>0)
        {
            printf("NE");
        }
        else
        {
            printf("Invalid input");
        }
    }
    return 0;
}
