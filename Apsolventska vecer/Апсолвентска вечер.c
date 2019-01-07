#include <stdio.h>
#include <stdlib.h>

/*
Со цел успешно да се организира претстојната апсолвентска вечер за тековната генерација на апсолвенти, СП ФИНКИ има задача да го провери распоредот на седење на студентите во салата и да се отстранат евентуални пропусти во списокот. 

Од стандарден влез се читаат 2 цели броеви, M - вкупниот број на маси во салата и K - максималниот број на студенти што може да седнат на една маса.

Потоа, за секоја маса се читаат броеви на индекс на студенти - апсолвенти се додека не се прочита 0, што означува крај на списокот за таа маса.

За секоја маса треба да се провери дали списокот ги содржи некои од следниве пропусти:

	-Запишани се повеќе студенти од колку што собира масата;

	-Студентите не се подредени според број на индекс;
	
	-Во списокот има студенти од различни смерови;

Ако списокот е во ред се печати MASA N OK каде што N е редниот број на масата. Инаку, се печати MASA N NE E OK заедно со соодветни пораки за најдените пропусти.
*/

int main()
{
    int m,k,i,index;
    int tmp_poveke,poveke;
    int first,po_broj,tmp_po_broj;
    int smer,tmp_smer;
    scanf("%d %d",&m,&k);
    for(i=1;i<=m;i++)
    {
        poveke=0;
        tmp_poveke=0;
        first=1;
        po_broj=0;
        smer=0;
        while(scanf("%d",&index))
        {
            if(index==0)
            {
                break;
            }
            if(first)
            {
                tmp_po_broj=index;
                tmp_smer=index/1000;
                first=0;
            }
            else
            {
                if(tmp_po_broj<index)
                {
                    tmp_po_broj=index;
                }
                else
                {
                    po_broj=1;
                }
                if(tmp_smer!=index/1000)
                {
                    smer=1;
                }
            }
            tmp_poveke++;
            if(tmp_poveke>k)
            {
                poveke=1;
            }
        }
        if(poveke==0 && po_broj==0 && smer==0)
        {
            printf("MASA %d OK\n",i);
        }
        else
        {
            printf("MASA %d NE E OK\n",i);
        }
        if(poveke!=0)
        {
            printf("NADMINAT MASKIMALNIOT BROJ NA STUDENTI NA EDNA MASA\n");
        }
        if(po_broj!=0)
        {
            printf("STUDENTITE NE SE PODREDENI\n");
        }
        if(smer!=0)
        {
            printf("IMA STUDENTI OD POVEKJE SMEROVI\n");
        }
    }
    return 0;
}
