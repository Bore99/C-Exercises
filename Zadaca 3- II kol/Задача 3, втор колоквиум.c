#include <stdio.h>
#include <string.h>

/*
Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.

На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).

Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:

ab12 1 1.25

Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
*/

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
	// vasiot kod pocnuva od ovde

    FILE *f = fopen("livce.txt", "r");

    int tip, maxtip;

    float koef, uplata, max=0;

    char sifra[10],maxsifra[10],*c;

    fscanf(f,"%f",&uplata);

    while( fscanf(f,"%s %d %f",sifra,&tip,&koef) != EOF )
    {
        if(koef>max)
        {
            max=koef;
            maxtip=tip;
            strcpy(maxsifra,sifra);
        }
        
        uplata*=koef; 
    }
    
    printf("%s %d %.2f\n%.2f",maxsifra, maxtip, max, uplata);
    
    fclose(f);
	return 0;

}
