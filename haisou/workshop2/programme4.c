#include <stdio.h>

int main()
{
    int e=0,count=0,total=0;
    while(e>-1){
        printf("Entre un nombre positif : \n");
        scanf("%d",&e);
        if(e>-1){
            count++;
            total += e;
        }
    }
    printf("la moyenne de  ces %d entier vaut %f",count,(float)total/count);
}