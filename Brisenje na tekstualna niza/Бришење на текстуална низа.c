#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char *strremove(char *str, const char *sub) {
    size_t len = strlen(sub);
    if (len > 0) {
        char *p = str;
        while ((p = strstr(p, sub)) != NULL) {
            memmove(p, p + len, strlen(p + len) + 1);
        }
    }
    return str;
}

int main() {
    char a[MAX],b[MAX],p;
    int i=0,j=0,flag=0;
    while( (p=getchar()) !='\n') {
        *(a+i)=p;
        i++;
    }
    *(a+i)='\0';
    i=0;
    while( (p=getchar()) !='\n') {
        *(b+i)=p;
        i++;
    }
    *(b+i)='\0';
    char *p1,*p2,*p3;
    p1=a;
    p2=b;
   // printf("%c", *p1);
    //printf("%c", *p2);
    for(i=0 ; i<strlen(a) ; i++) {


        if(*p1==*p2) {
            p3=p1;
            for(j=0; j<strlen(b) ; j++) {
                if(*p3==*p2) {
                    p2++;
                    p3++;
                } else {
                    break;
                }
            }
            p2=b;
            if(j==strlen(b)) {
                flag=1;
            }
        }
        p1++;
    }

    if(flag)
     {
        // printf("flag 1");
         printf("%s",strremove(a,b));
     }
     else
     {
         printf("String not found");
     }
    return 0;
}
