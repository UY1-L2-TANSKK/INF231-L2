
#include <stdio.h>

int main() {
    int a, b;
    int resultat = 0;

    printf("Entrez deux entiers positifs (a et b) : \n");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Erreur : a et b doivent etre positifs !\n");
        return 1;
    }

    // On ajoute a, b fois
    for (int i = 0; i < b; i++) {
        resultat = resultat + a;
    }

    printf("%d * %d = %d\n", a, b, resultat);

    return 0;
}
