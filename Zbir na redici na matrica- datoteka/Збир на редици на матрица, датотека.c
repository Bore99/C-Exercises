#include <stdio.h>
    

/*
Да се напише програма која ќе ги прочита елементите на една матрица сместени во текстуална датотека „matrica.txt“. Во првиот ред на датотеката се запишани бројот на редици и колони на матрицата, а потоа се запишани елементите на матрицата. Потребно е за секоја редица да го пресметате збирот на елементите и во текстуалната датотека „izlez.txt“ да се испечатат само оние збирови по редици коишто се поголеми од 10.

Забелешка: Да не се менуваат дадените функции writeToFile() printFile(). Тие служат за креирање и проверка на потребните датотеки.
*/


void writeToFile() {
FILE *f = fopen("matrica.txt", "w");
        char c;
        while((c = getchar()) != '#') {
            fputc(c, f);
        }
        fclose(f);
    }
    
    void printFile() {
    
        FILE *f=fopen("izlez.txt","r");
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
    
        FILE *f = fopen("matrica.txt","r");
    
        int m,n,c,zbir,i,j;
    
        fscanf(f,"%d %d",&m,&n);
    
        int a[m+1][n+1];
        
        for( i=0 ; i<m&&!feof(f); i++)
        {
            zbir=0;
            for( j=0 ; j<n && !feof(f) ; j++ )
            {
                fscanf(f,"%d",&a[i][j]);
                
                zbir+=a[i][j];
            }
            if(zbir>10)
            {
                printf("%d\n",zbir);
            }
        }
    
        printFile();
        fclose(f);
        return 0;
    }
