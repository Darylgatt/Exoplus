#include <stdio.h>

// Déclaration des fonctions 
int somme(int a, int b);
float aire_cercle(float rayon);
int max(int a, int b);

// Fonction pour calculer la somme de deux entiers
int somme(int a, int b) {
    return a + b;
}

// Fonction pour calculer l'aire d'un cercle 
float aire_cercle(float rayon) {
    return 3.14 * rayon * rayon;
}

// Fonction pour retourner le plus grand de deux nombres
int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

// Fonction principale
int main() {
    int x = 8;
    int y = 5;
    float rayon = 4.5;

    // Appel de la fonction somme
    int resultat_somme = somme(x, y);
    printf("Somme : %d + %d = %d\n", x, y, resultat_somme);

    // Appel de la fonction aire_cercle
    float resultat_aire = aire_cercle(rayon);
    printf("Aire du cercle de rayon %.2f = %.2f\n", rayon, resultat_aire);

    // Appel de la fonction max
    int resultat_max = max(x, y);
    printf("Le plus grand entre %d et %d est : %d\n", x, y, resultat_max);

    return 0;
}
