#include <stdio.h>

void trier(int tab[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }
    trier(tab, n);

    // Affichage du tableau trie
    printf("\nTableau trie : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    double mediane;
    if (n % 2 == 1) {
        mediane = tab[n / 2];
    } else {
        mediane = (tab[n / 2 - 1] + tab[n / 2]) / 2.0;
    }

    printf("La mediane est : %.2f\n", mediane);

    return 0;
}
