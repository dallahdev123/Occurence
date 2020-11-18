#include<stdio.h>

int tabNotOccured(int tableau[], int N){
    int i,j=0,k=0,indiceZero;
    printf("tableau donnée:\n");
    for (i=0; i<N; i++)
    {
        /* code */
        printf("%d ",tableau[i]);
    }
    printf("\n");
//------------------------------------------------------------
    for (i=0; i<N; i++)
    {
        /* code */
        if(tableau[i]==0)
        {
            /* code */
            j++;
        }
            
    }
//------------------------------------------------------------

    if (j>1)
    {
        for (i = 0; i < N; i++)
        {
            if (tableau[i]==0)
            {
                indiceZero=i+1;
                 break;

            } 
        }
        
        /* code */
        for (i=indiceZero; i<=N; i++)
        {
            /* code */
            tableau[k] = tableau[i];

            if (tableau[i]!= 0)
            {
                /* code */
                k++;

            }
            
        }
        N=k;
         
       printf("le tableau final = \n");
 
      for (i = 0; i<N; i++)
         printf("%d ", tableau[i]);

    printf("\n\n\n");

    }else
    {
        printf("Le tableau n'a pas d'occurences de 0\n");
        for (i=0; i<N; i++)
            {
                /* code */
                printf("%d ",tableau[i]);
            }
                printf("\n\n\n");
    }
    return 0;
    
}