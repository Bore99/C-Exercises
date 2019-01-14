#include <stdio.h>
#include <string.h>

/*
Да се напише програма која од датотеката со име "text.txt" ќе го одреди и отпечати на стандарден излез односот на цифри и букви.

Забелешка: Да не се менува функцијата writeToFile(). Таа служи за креирање и пополнување на влезната датотека со податоците дадени на стандардниот влез.
*/

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    
    // vasiot kod ovde
    
    FILE *f = fopen("text.txt","r");
    
    char c;
    
    int bukvi=0,cifri=0;
    
    while ( (c=fgetc(f)) != EOF)
    {
        if (isalpha(c)) bukvi++;
        if (isdigit(c)) cifri++;
    }
    printf("%.2f",(float)cifri/bukvi);
}
