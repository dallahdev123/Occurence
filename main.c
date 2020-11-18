#include<stdio.h>
#include<stdlib.h>
#include"tab.h"

int main(){
    int i,max,tailleTab;
    char c;
    int tableau[50];
    do
    {
        /* code */
        do
        {
            printf("Donner la taille du tableau >1: \n");
            tailleTab=scanf("%d",&max);
            while((c=getchar())!='\n' && c != EOF);

        } while (max<=1 || max>50);
        
        if (tailleTab==1)
        {
            /* code */
            for (i=0; i<max; i++)
            {
                /* code */
                printf("Donner la valeur de tableau[%d]: \n",i);
                scanf("%d",&tableau[i]);
            }
            tabNotOccured(tableau,max);
        }else
        {
            printf("La valeur saisis n'est pas correcte\n");
            while((c=getchar())!='\n' && c != EOF);
        }
    } while (1);

    return 0;
}
