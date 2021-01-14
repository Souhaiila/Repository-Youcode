#include <stdio.h>

#define PI 3.14159

int diametre(int r){
    return r * 2;
}

int perimetre(int r){
    return PI * r * 2;
    }
    int surface(int r){
        return PI * r * r;
        }
void main(){
    int rayon;
    printf("donner la valeur de rayon : \n");
    scanf("%d",&rayon);
    printf("Perimetre: %d \n", perimetre(rayon));
    printf("Diametre: %d \n", diametre(rayon));
    printf("Surface: %d \n", surface(rayon));
    }