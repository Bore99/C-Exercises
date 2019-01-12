#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

/*
Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите во датотеката не се подолги од 100 знаци.
*/

//ne menuvaj!
void wtf()
{
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();

    // vashiot kod ovde

    FILE *f=fopen("input.txt","r");

    char c,podredeni[MAX];

    int i=0, cifri=0, l, k, tmp;

    while( (c=fgetc(f)) != EOF )
    {
        if( c=='\n')
        {
            for( l=0 ; l<cifri-1 ; l++)
            {
                for( k =l+1 ; k<cifri; k++)
                {
                    if(podredeni[l]>podredeni[k])
                    {
                            tmp=podredeni[l];
                            podredeni[l]=podredeni[k];
                            podredeni[k]=tmp;
                    }
                }
            }

            printf("%d:",cifri);
            
            for( i=0 ; i<cifri ; i++)
            {
                printf("%c",podredeni[i]);
            }
            printf("\n");
            /*for( i=0 ; i<cifri ; i++) //Reset
            {
                podredeni[i]=0;
            }*/
            
            i=cifri=0;
        }

        if( isdigit(c) )
        {
            cifri++;
            podredeni[i]=c;
            i++;
        }
    }
    
    fclose(f);
}
