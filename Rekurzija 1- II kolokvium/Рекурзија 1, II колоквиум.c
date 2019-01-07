#include <stdio.h>
#include <stdlib.h>


/*
Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.

Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број. За секој од нив да се испечати максималната цифра во посебен ред.

Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.

Забелешка: ЗАБРАНЕТО е користење на глобални променливи.
*/

int max_cifra(int n, int max, int max2)
{
    if(max2>max)
    {
        max=max2;
        return max_cifra(n/10,max,n%10);
    }
    if(!n)
    {
        return max;
    }
    return max_cifra(n/10,max,n%10);
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",max_cifra(n,0,0));
    }
    return 0;
}
