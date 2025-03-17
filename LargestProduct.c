
#include <stdio.h>
#include <string.h>

// Fonction pour convertir un caractère en entier (par exemple, '5' -> 5)
int charToDigit(char c) {
    return c - '0';
}

int main() {
    // Concaténer le nombre donné en une seule chaîne
    char number[1001] = 
        "73167176531330624919225119674426574742355349194934"
        "96983520312774506326239578318016984801869478851843"
        "85861560789112949495459501737958331952853208805511"
        "12540698747158523863050715693290963295227443043557"
        "66896648950445244523161731856403098711121722383113"
        "62229893423380308135336276614282806444486645238749"
        "30358907296290491560440772390713810515859307960866"
        "70172427121883998797908792274921901699720888093776"
        "65727333001053367881220235421809751254540594752243"
        "52584907711670556013604839586446706324415722155397"
        "53697817977846174064955149290862569321978468622482"
        "83972241375657056057490261407972968652414535100474"
        "82166370484403199890008895243450658541227588666881"
        "16427171479924442928230863465674813919123162824586"
        "17866458359124566529476545682848912883142607690042"
        "24219022671055626321111109370544217506941658960408"
        "07198403850962455444362981230987879927244284909188"
        "84580156166097919133875499200524063689912560717606"
        "05886116467109405077541002256983155200055935729725"
        "71636269561882670428252483600823257530420752963450";

    int len = strlen(number); // Longueur du nombre (1000 chiffres)
    const int WINDOW_SIZE = 13; // Taille de la fenêtre (13 chiffres)
    long long maxProduct = 0; // Produit maximal
    char maxSequence[WINDOW_SIZE + 1]; // Pour stocker les chiffres correspondants
  int i,j;
    // Parcourir toutes les fenêtres de 13 chiffres
    for (i = 0; i <= len - WINDOW_SIZE; i++) {
        // Vérifier si la fenêtre contient un zéro
        int hasZero = 0;
        for (j = 0; j < WINDOW_SIZE; j++) {
            if (number[i + j] == '0') {
                hasZero = 1;
                // Avancer l'index i après le zéro
                i = i + j;
                break;
            }
        }

        // Si la fenêtre contient un zéro, passer à la suivante
        if (hasZero) continue;

        // Calculer le produit des 13 chiffres
        long long product = 1;
        for ( j = 0; j < WINDOW_SIZE; j++) {
            product *= charToDigit(number[i + j]);
        }

        // Mettre à jour le produit maximal et la séquence correspondante
        if (product > maxProduct) {
            maxProduct = product;
            for ( j = 0; j < WINDOW_SIZE; j++) {
                maxSequence[j] = number[i + j];
            }
            maxSequence[WINDOW_SIZE] = '\0'; // Terminer la chaîne
        }
    }

    // Afficher les résultats
    printf("Les 13 chiffres adjacents avec le plus grand produit sont : %s\n", maxSequence);
    printf("Leur produit est : %lld\n", maxProduct);

    return 0;
}

