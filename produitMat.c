
#include <stdio.h>

#define MAX 10

void multiplierMatrices(int A[][MAX], int B[][MAX], int produit[][MAX], 
                       int lignesA, int colonnesA, int colonnesB) {
    for (int i = 0; i < lignesA; i++) {
        for (int j = 0; j < colonnesB; j++) {
            produit[i][j] = 0;
            for (int k = 0; k < colonnesA; k++) {
                produit[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void afficherMatrice(int matrice[][MAX], int lignes, int colonnes, char nom) {
    printf("\nMatrice %c :\n", nom);
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%4d ", matrice[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], produit[MAX][MAX];
    int lignesA, colonnesA, lignesB, colonnesB;
    
    printf("PRODUIT DE DEUX MATRICES\n\n");
    
    printf("Dimensions de la matrice A :\n");
    printf("Lignes : "); scanf("%d", &lignesA);
    printf("Colonnes : "); scanf("%d", &colonnesA);
    
    printf("\nDimensions de la matrice B :\n");
    printf("Lignes : "); scanf("%d", &lignesB);
    printf("Colonnes : "); scanf("%d", &colonnesB);
    
    if (colonnesA != lignesB) {
        printf(" Multiplication impossible !\n");
        return 1;
    }
    
    // Saisie de la matrice A
    printf("\nSaisie de la matrice A :\n");
    for (int i = 0; i < lignesA; i++) {
        for (int j = 0; j < colonnesA; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    // Saisie de la matrice B
    printf("\nSaisie de la matrice B :\n");
    for (int i = 0; i < lignesB; i++) {
        for (int j = 0; j < colonnesB; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    // Multiplication
    multiplierMatrices(A, B, produit, lignesA, colonnesA, colonnesB);
    
    // Affichage des résultats
    afficherMatrice(A, lignesA, colonnesA, 'A');
    afficherMatrice(B, lignesB, colonnesB, 'B');
    afficherMatrice(produit, lignesA, colonnesB, 'C');
    
    return 0;
}

