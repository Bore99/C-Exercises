#include <stdio.h>
#include <string.h>
#define MAX 100

/*
Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.
*/

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();

    FILE *f=fopen("broevi.txt","r");

    // vashiot kod ovde

    int max,first,n,naj,c,tmp,maxi;

	while(1)
    {
        fscanf(f,"%d",&n);

        if(!n)  break;

        max=0;

        while(n)
        {
            n--;
            fscanf(f,"%d",&c);
            tmp=c;
            while(c>9)
            {
                naj=c%10;
                c/=10;
            }
            if(c>max)
            {
                max=c;
                maxi=tmp;
            }
        }
        printf("%d\n",maxi);
    }
}
