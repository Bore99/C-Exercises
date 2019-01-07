#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int f(char *a,char *b)
{
    int i;
    for( i=0 ; (*a!='\0')&&(*b!='\0') ; a++ , b++ )
    {
        if(*a==*b)
        {
            *a='*';
            *b='*';
            i++;
        }
    }
    return i;
}
int main()
{
    char a[MAX],b[MAX],p;
    int i=0;
    while( (p=getchar()) !='\n')
    {
        *(a+i)=p;
        i++;
    }
    *(a+i)='\0';
    i=0;
    while( (p=getchar()) !='\n')
    {
        *(b+i)=p;
        i++;
    }
    *(b+i)='\0';
    printf("%d\n",f(a,b));
    printf("%s\n",a);
    printf("%s",b);
    return 0;
}
