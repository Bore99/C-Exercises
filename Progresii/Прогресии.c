#include <stdio.h>
#include <stdlib.h>

/*
Од стандарден влез се вчитува број N. Потоа N пати се вчитуваат секвенци на броеви зададени со:

број М (колку броеви има секвенцата)
М броеви (броевите во секвенцата)
За секоја секвенца да се испечати една од трите пораки според тоа дали секвенцата е прогресија или не:

ARITMETICKA
GEOMETRISKA
NE E PROGRESIJA
Една секвенца е аритметичка прогресија доколку разликата на секој член, со неговиот претходник е постојано иста.

Пример. 1 4 7 10 13 16 итн.

Една секвенца е геометриска прогресија доколку количникот на секој член со неговиот претходник е постојано ист.

Пример. 1 2 4 8 16 итн.

Задачата да се реши без употребување на низи!
*/
int main()
{
    int n,m,i,tmpa,x,prev,arit,tmpg,geo,tmp;
    scanf("%d",&n);
    while(n)
    {
        tmpa=0;
        tmpg=0;
        scanf("%d",&m);
        tmp=m; //Ne raboti za specijalen slucaj na code kade sto m=2
        scanf("%d",&prev);
        scanf("%d",&x);
        geo=x/prev;
        arit=x-prev;
        prev=x;
        while(m-2)
        {
            scanf("%d",&x);
            if(arit==(x-prev))
            {
                if(geo==(x/prev))
                {
                    prev=x;
                    m--;
                    continue;
                }
                else
                {
                    prev=x;
                    m--;
                    tmpg++;
                    continue;
                }
            }
            else
            {
                tmpa++;
                m--;
                continue;
            }
            if(geo==(x/prev))
            {
                if(arit==(x-prev))
                {
                    prev=x;
                    m--;
                    continue;
                }
                else
                {
                    prev=x;
                    m--;
                    tmpa++;
                    continue;
                }
            }
            else
            {
                tmpg++;
                m--;
                continue;
            }
        }
        if(tmpa==0 && tmpg==0 && tmp!=2) //Ova tmp e staveno bidejki prviot input e pogresen vo code  (ne treba)
            {
                printf("ARITMETICKA I GEOMETRISKA\n");
            }
            else
            {
                if(tmpa==0) //Ova tmp e staveno bidejki prviot input e pogresen vo code (ne treba)
                {
                    printf("ARITMETICKA\n");
                }
                if(tmpg==0 && tmp!=2) //Ova tmp e staveno bidejki prviot input e pogresen vo code (ne treba)
                {
                    printf("GEOMETRISKA\n");
                }
            }
            if(tmpa!=0 && tmpg!=0)
            {
                printf("NE E PROGRESIJA\n");
            }
            n--;
    }
return 0;
}
