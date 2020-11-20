#include<stdio.h>

int tabNotOccured(int tableau[], int N){
//-----------Déclaration des variables------------------------
    int i,j=0,k=0,indiceZero;
    int pos=0,neg=0;
    int TPOS[10];
    int TNEG[10];
//-----------Affichage du tableau donné------------------------

    printf("tableau donnée:\n");
    for (i=0; i<N; i++)
    {
        printf("%d ",tableau[i]);
    }
    printf("\n\n");
//--------------Vérification des Occurences------------------
    for (i=0; i<N; i++)
    {
        if(tableau[i]==0)
        {
            j++;
        }
            
    }
//----------Suppression des occurrences s'il y'en a----------
    if (j>1)
    {
        for (i=0; i<=N; i++)
        {
            tableau[k] = tableau[i];

            if (tableau[i]!= 0)
            {
                k++;
            }   
        }
        N=k;
//----------Affichage du tableau Apres suppression---------

    printf("le tableau final = \n");
      for (i = 0; i<N; i++)
         printf("%d ", tableau[i]);
    printf("\n\n");
    }else
    {
        printf("Le tableau n'a pas d'occurences de 0\n");
        for (i=0; i<N; i++)
            {
                printf("%d ",tableau[i]);
            }
                printf("\n\n");
    }

//------Inversion et Affichage du tableau Apres suppression-----
    printf("tableau inversé:\n");
    for (i=N-1; i>=0; i--)
    {
        printf("%d ",tableau[i]);
    }
    printf("\n\n");

//----Création et affichage des tableaux Positif et Negatif-----
 for (i = 0; i < N; i++)
    {
        if (tableau[i]<0)
        {
            TNEG[neg]=tableau[i];
            neg++;
        }else
        {
            TPOS[pos]=tableau[i];
            pos++;
        }   
    }
    printf("Tableau positif:\n");
    for (i= 0; i <pos ; i++)
    {
        printf("%d ",TPOS[i]);
    }
    printf("\n\n");

    printf("Tableau negatif:\n");
    for (i= 0; i <neg ; i++)
    {
        printf("%d ",TNEG[i]);
    }
    printf("\n\n");

    return 0;
    
}