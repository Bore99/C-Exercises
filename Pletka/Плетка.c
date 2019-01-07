#include <stdio.h>
#include <stdlib.h>

/*
Со помош на знаците ‘@’,'%', и ‘.‘ се формира квадратна слика со „должина“ m (m>2) која претставува квадрат од знаците '.', впишан во квадрат од знаците @ и %(види примери). За внесено m да се испечати на екран соодветната слика. Внимавајте – не печатете нити еден дополнителен знак, како празно место, непотребен знак за нов ред... Сликата завршува со знак за нов ред. Забелешка: Бидејќи е дадено ограничување за m, во точно решение на задачата не треба да се користи низа/матрица.
*/
int main()
{
    int m,i,j;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
       if(i==1)
       {
            printf("%%");
            for(j=i+1;j<=m-1;j++)
            {
                printf("@");
            }
            printf("%%\n");
       }
        if(i!=1 && i!=m)
       {
            printf("%%");
            for(j=2;j<=m-1;j++)
            {
                printf(".");
            }
            printf("%%\n");
       }
       if(i==m)
       {
            printf("%%");
            for(j=2;j<=m-1;j++)
            {
                printf("@");
            }
            printf("%%\n");
       }
    }
    return 0;
}
