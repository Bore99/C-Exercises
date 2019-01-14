#include <stdio.h>
#include <string.h>

/*
Да се напише програма која од дадена датотека text.txt ќе ја испечати позицијата на редот кој содржи најголем број на големи букви. Максималната должина на еден ред е 80 знаци. Доколку има повеќе редови со ист максимален број на големи букви, треба да се испечати позицијата на првиот од нив.

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
    
    int i,vkupno,red,max=0,brojnared=1;
    
    char a[81];
    
    while ( (fgets(a,80,f)) != NULL)
    {
        vkupno=0;
        
        for( i=0; i<strlen(a); i++)
        {
            if ( isupper(a[i]) )
            {
                vkupno++;
            }
        }
        if(vkupno>max)
        {
            red=brojnared;
            max=vkupno;
        }
        
        brojnared++;
        //if( a[strlen(a)-1] == '#' )    break; 
    }
    
    fclose(f);
    
    printf("%d",red);
}
