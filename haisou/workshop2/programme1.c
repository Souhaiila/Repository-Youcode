#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom [15];
    char prenom [25];
    int age [40];
    char sexe [1];
    long numero_de_telphone;

        printf("veuillez enter votre nom: \n");
        scanf("%s",&nom);
        printf("veuillez 7enter votre prenom: \n");
        scanf("%s",&prenom);
        printf("veuillez enter votre age: \n");
        scanf("%d",&age);
        printf("veuillez enter votre sexe: \n");
        scanf(" %c",&sexe);
        printf("veuillez enter votre numero de telphone: \n");
        scanf("%ld",&numero_de_telphone);


    return 0;
}
