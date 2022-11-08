#include<stdio.h>
#include<stdlib.h>

int main(){
    int taille = 0;
    printf("Coucou, quel est la taille de ton nom ?");
    scanf("%d",&taille);
    char* name =(char*) malloc(taille*sizeof(char));
    printf("Coucou, quel est ton nom ?");
    scanf("%s",name);
    printf("%s",name);
    free(name);
}
