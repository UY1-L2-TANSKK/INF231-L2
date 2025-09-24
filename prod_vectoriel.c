#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez la taille des vecteurs : ");
    scanf("%d", &n);

    int a[n], b[n];
    printf("Entrez les éléments du vecteur A :\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Entrez les éléments du vecteur B :\n");
    for (i = 0; i < n; i++) scanf("%d", &b[i]);

    int produit_scalaire = 0;
    for (i = 0; i < n; i++) {
        produit_scalaire += a[i] * b[i];
    }

    printf("Produit scalaire = %d\n", produit_scalaire);
    return 0;
}
