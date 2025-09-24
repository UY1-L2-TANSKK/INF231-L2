#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

int* InverseTableau(int Te[])
{
     static int Ts[TAILLE];
     int i;
     for(i = 0; i < TAILLE; i++)
     {
          Ts[i] = Te[TAILLE - i - 1];
     }
     return Ts;
}


int main()
{
     int i, Te[TAILLE] = {0};

     printf("Entrez les 10 elements du tableau : \n");
     for(i = 0; i < TAILLE; i++)
     {
         scanf("%d", &Te[i]);
     }
     printf("Tableau initial : \n");
     for(i = 0; i < TAILLE; i++)
     {
         printf("%d\n", Te[i]);
     }


     int* Ts = InverseTableau(Te);

     printf("Tableau inverse : \n");
     for(i = 0; i < TAILLE; i++)
     {
         printf("%d\n", Ts[i]);
     }

     return 0;
}
