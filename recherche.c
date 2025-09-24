#include <stdio.h>

int main() {
    int n, i, x, pos = -1;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }
    printf("\nEntrez la valeur a rechercher : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (tab[i] == x) {
            pos = i; 
        }
    }
    if (pos != -1) {
        printf("\nValeur %d trouvée à la position %d.\n", x, pos+1);
    } else {
        printf("\nValeur %d non trouvée dans le tableau.\n", x);
    }

    return 0;
}
