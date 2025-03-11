#include <stdio.h>

#define MAX_STEPS 1000 // Limite maximale d'itérations

int main() {
    long long n;
    int i, steps = 0;
    long long sequence[MAX_STEPS]; // Tableau pour stocker la séquence

    printf("Entrez un nombre entier positif : ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre positif !\n");
        return 1;
    }

    printf("Sequence de Collatz pour %lld :\n", n);
    sequence[steps++] = n; // Stocker le premier nombre

    while (n != 1 && steps < MAX_STEPS) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        sequence[steps++] = n;
    }

    // Afficher la séquence
    for ( i = 0; i < steps; i++) {
        printf("%lld ", sequence[i]);
    }
    printf("\n");

    if (steps >= MAX_STEPS) {
        printf("Limite d'iterations atteinte (%d). La sequence peut ne pas converger.\n", MAX_STEPS);
    } else {
        printf("Nombre d'etapes : %d\n", steps - 1); // -1 car on compte jusqu'à 1
    }

    return 0;
}
