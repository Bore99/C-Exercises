#include <stdio.h>
#include <string.h>

/*
Да се направи програма која од влезната датотека „text.txt“ ќе ги одреди и отпечати сите зборови палиндроми во излезната датотека „print.txt“. Да се избегнуваат интерпукциските знаци точка (.) и запирка (,) и да не се прави разлика меѓу големи и мали букви.

Забелешка: Да не се менуваат дадените функции writeToFile() и printFile(). Тие служат за креирање и проверка на потребните датотеки.
*/

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFile() {
    FILE *f=fopen("print.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    writeToFile();

    //Vasiot kod tuka

    FILE *f = fopen("text.txt","r");
    FILE *izlez = fopen("print.txt","w");

    char a[100],b[100];

    int i,j,pom,k;

    while( fscanf(f,"%s",a) != EOF )
    {
        pom=1;
        k=0;

        for( i=0 , k=0; i<strlen(a) ; i++)
        {
            if( isalpha(a[i]) )
            {
                b[i]=a[i];
                k++;
            }
        }

        b[i]='\0';

        for( i=0 , j=strlen(b)-1 ; i<=j ; i++, j--)
        {
            if( tolower(b[i]) != tolower(b[j]) )
            {
                pom=0;
                break;
            }
        }

        if(pom)
        {
            fprintf(izlez,"%s\n",b);
        }
    }
    
    fclose(f);
    fclose(izlez);
    
    printFile();
    return 0;
}
