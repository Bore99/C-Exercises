#include <stdio.h>
#include <stdlib.h>

/*
Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту
една од цифрите на другиот број.

Задачата да се реши без употреба на низи и матрици.
*/
int main()
{
    int n,x,i,j,k,tmp,rez;
    scanf("%d %d",&n,&x); //Vnesuva n i x
    int j2,k2;
    for( i=n-1 ; i>=0 ; i-- ) //Gi vrti broevite pomali od n
    {
        tmp=0;
        for( j=i ; j>0 ; j/=10 )//Gi vrti cifrite na i
        {
            for( k=x ; k>0 ; k/=10 ) //Gi vrti cifirite na x
            {
                if((j%10)==(k%10))
                {
                    tmp=1;
                    break;
                }
            }
            if(tmp==1)
            {
                break;
            }
        }
        if(tmp==0)
        {
            rez=i;
            break;
        }
    }
    printf("%d",rez);
    return 0;
}
