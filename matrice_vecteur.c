#include <stdio.h>

int main() {
    int m, n;
    printf("Entrez le nombre de lignes de la matrice : ");
    scanf("%d", &m);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &n);

    int A[m][n], x[n], y[m];

    // Lecture de la matrice
    printf("Entrez les éléments de la matrice A (%d x %d) :\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Lecture du vecteur
    printf("Entrez les éléments du vecteur x (%d) :\n", n);
    for (int j = 0; j < n; j++) {
        scanf("%d", &x[j]);
    }

    // Calcul du produit
    for (int i = 0; i < m; i++) {
        y[i] = 0;
        for (int j = 0; j < n; j++) {
            y[i] += A[i][j] * x[j];
        }
    }

    // Affichage du résultat
    printf("Résultat du produit (vecteur y de taille %d) :\n", m);
    for (int i = 0; i < m; i++) {
        printf("%d ", y[i]);
    }
    printf("\n");

    return 0;
}
