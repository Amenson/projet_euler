#include <stdio.h>

// Fonction pour compter le nombre de diviseurs d'un nombre
long long countDivisors(long long n) {
    long long divisors = 1;
    long long count,i;

    // Compter les facteurs 2
    count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    divisors *= (count + 1);

    // Compter les autres facteurs premiers impairs
    for ( i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        divisors *= (count + 1);
    }

    // S'il reste un facteur premier > sqrt(n)
    if (n > 1) {
        divisors *= 2;
    }

    return divisors;
}

int main() {
    long long n = 1;
    long long triangular;
    int target = 500;

    printf("Calcul en cours...\n");

    while (1) {
        // Calculer le n-ième nombre triangulaire : n * (n + 1) / 2
        triangular = n * (n + 1) / 2;

        // Compter les diviseurs
        long long divisors = countDivisors(triangular);

        // Vérifier si le nombre de diviseurs dépasse 500
        if (divisors > target) {
            printf("Le premier nombre triangulaire avec plus de %d diviseurs est : %lld\n", target, triangular);
            printf("Nombre de diviseurs : %lld\n", divisors);
            printf("n = %lld\n", n);
            break;
        }

        n++;
        // Afficher une progression pour les grands n (optionnel)
        if (n % 1000 == 0) {
            printf("Test de n = %lld, T_n = %lld, diviseurs = %lld\n", n, triangular, divisors);
        }
    }

    return 0;
}
