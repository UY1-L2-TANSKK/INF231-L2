#include <stdio.h>
#include <stdbool.h>

// Fonction pour vérifier si un tableau est trié
bool estTrie(int tableau[], int taille) 
{
    for (int i = 0; i < taille - 1; i++) 
    {
        if (tableau[i] > tableau[i + 1]) 
        {
            return false;
        }
        
    }
    return true;
}

   
int main() 
{
    int tab[100], n;

    printf("Entrez le nombre d'éléments du tableau :\n");
    scanf("%d", &n);
    
    printf("Entrez les %d éléments du tableau :\n",n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &tab[i]);
    }

    // Vérification si le tableau est trié
    if (!estTrie(tab, n)) 
    {
        printf("Le tableau n'est pas trié.\n");
    }
    else 
    {
        printf("Le tableau est trié.\n");
    }

    printf("\n");

    return 0;
}

