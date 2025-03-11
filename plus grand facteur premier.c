#include <stdio.h>

long long plus_grand_facteur_premier(long long n) {
    long long i,max_facteur = 1;
    
    // Diviser par 2 autant que possible
    while (n % 2 == 0) {
        max_facteur = 2;
        n /= 2;
    }
    
    // Tester les nombres impairs
    for ( i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_facteur = i;
            n /= i;
        }
    }
    
    // Si n > 1, c’est un facteur premier restant
    if (n > 1) {
        max_facteur = n;
    }
    
    return max_facteur;
}

int main() {
    long long resultat,nombre;
    
    printf("Entrez un nombre entier positif : ");
    scanf("%lld", &nombre);
    
    if (nombre <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1;
    }
    
    resultat = plus_grand_facteur_premier(nombre);
    printf("Le plus grand facteur premier de %lld est : %lld\n", nombre, resultat);
    
    return 0;
}
