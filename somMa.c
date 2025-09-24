#include <stdio.h>
#include <stdlib.h>

void creerMatrice(int T[3][3])
{
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            
            printf("\nEntrez l'élement de la ligne %d colonne %d : \t",i+1,j+1);
            scanf("%d",&T[i][j]);            
        }
    }
}   

void afficherMatrice(int T[3][3])
{   
    int i,j;
    printf("\nVotre matrice est : \n\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t",T[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void additionMatrices(int T[3][3], int T1[3][3]) 
{   
    int i,j, som[i][j];
    printf("\nEntrez les éléments de la deuxième matrice : \n\n");
    creerMatrice(T1); 
    printf("\nLa somme est :\n");   
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            som[i][j] = T[i][j] + T1[i][j];
            printf("%d\t",som[i][j]);
        }
        printf("\n");
    }    
    
}
int main()
{   
    int max,s, T[3][3], T1[3][3];
    float moyenne;
    creerMatrice(T);
    afficherMatrice(T);
    additionMatrices(T,T1);
    return 0;
}
