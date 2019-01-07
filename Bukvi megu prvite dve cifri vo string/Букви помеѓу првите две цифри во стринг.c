#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main()
{
    char a[MAX],p;
    int i=0,j=0;
    while( (p=getchar()) !='\n')
    {
        *(a+i)=p;
        i++;
    }
    *(a+i)='\0';
    for(i=0;*(a+i)!='\0';i++)
    {
        if(isdigit(*(a+i)))
        {
            *(a+j)=*(a+i);
            i++;
            j++;
            while( !isdigit(*(a+i))&&*(a+i)!='\0')
            {
                *(a+j)=*(a+i);
                i++;
                j++;
            }
            *(a+j)=*(a+i);
            *(a+j+1)='\0';
            break;
        }
    }
    if(!j)
    {
        printf("Nema cifri");
    }
    else
    {
        printf("%s",a);
    }
    return 0;
}
