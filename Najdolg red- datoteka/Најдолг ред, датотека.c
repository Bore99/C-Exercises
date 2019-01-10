#include <stdio.h>
#include <string.h>

/*
Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри. На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.

Пример.

Влез: 
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a

Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2

*/

// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w"); //Nekoja datoteka
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
	// vasiot kod ovde
    FILE *f=fopen("dat.txt","r");
    
    char c,red[101],finalz[101];
    
    int vkupno=0,cifri=0,max=0,i,prvac=0,poslednac=0,first; //Pomosni promenlivi i brojaci
    
    int prc,posc;
    
    while( (fgets(red,100,f)) != NULL ) //Citanje red po red
    {
        first=1;
        for( i=0; i<strlen(red); i++ )
        {
            if( isdigit(red[i]) ) //Ako e cifra
            {
                if(first) //Ako e prvata sto se javuva
                {
                    cifri++;
                    prvac=i; //Mi treba ovaa pozicija za pocetok na pecatenjeto
                    first=0;
                }
                else
                {
                    cifri++;
                    poslednac=i; //Isto i poslednata za krajot
                }
            }
            vkupno++;
        }
        if( cifri>1 && vkupno>=max )
        {
            max=vkupno;
            strcpy(finalz,red); //Kopiranje na dadeniot red vo nov
            prc=prvac; //Pocetok i kraj na cifrite, za pecatenje
            posc=poslednac;
        }
        vkupno=cifri=0; //Konstantno resetiranje
    }
    for( i=prc; i<=posc; i++ )
    {
        printf("%c",finalz[i]); //Pecatenje na najdolgiot red, od prvata do poslednata cifra
    }
    fclose(f);
}
