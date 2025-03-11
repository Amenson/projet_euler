#include <stdio.h>

int main() {
    long long n, triang;

    printf("Les 10 premiers nombres triangulaires sont :\n");

    for (n = 1; n <= 100; n++) {
        // Calcul du n-ième nombre triangulaire avec la formule n(n+1)/2
        triang = n * (n + 1) / 2;
        printf("%d ", triang);
    }

    printf("\n");
    
    
    
    
    
    
    return 0;
}
