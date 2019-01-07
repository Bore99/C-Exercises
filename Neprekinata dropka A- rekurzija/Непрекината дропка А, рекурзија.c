#include <stdio.h>
#include <stdlib.h>

/*
Да се имплементира рекурзивна функција која за низа од цели броеви [a0,a1,...,an−1] ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRTFR8emTCFwa4vcB1959oEkGXYFqssR7IV-UIRWH9JYXe6XQz2VQ

Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и се печати резултатот во нов ред.
*/

float f(int a[],int n, int x)
{
    if(x==n-1)
    {
        if(n==1)
        {
            return a[x];
        }
        return a[x];
    }
    return 1/f(a,n,x+1)+a[x];
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%f",f(a,n,0));
    return 0;
}
