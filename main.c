#include <stdio.h>

void exo1() {
    int a;

    printf("Veuillez entrer un entier strictement positif : ");
    scanf("%d", &a);

    printf("Les diviseurs de %d sont ", a);

    for (int i = 0; i <= a; i++) {
        if (a % i == 0) {
            if (i == a) printf("et %d", i);
            else printf("%d, ", i);
        }
    }

}

void exo2() {
    char string[101];
    scanf("%100s", &string);

    int j = 0;
    for (int i = 0; i <= 101; i++) {
        if (string[i] == '\0') {
            printf("Vous avez entré la chaîne \"%s\" de longueur %d", string, j);
            return;
        } else j++;
    }

}

void exo3() {
    int a, j = 0;
    int array[100] = {};

    scanf("%d", &a);


    for (int i = 0; i < a; i++) {
        scanf("%d", &array[i]);
    }


    for (int i = 1; i <= a; i++) {
        if (array[i] > array[i-1]){
            j++;
        }
    }

    printf("Nombre final : %d\n", j);
}

void exo4() {
    int a, b;
    int array1[200], array2[200] = {};

    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d", &array1[i]);
    }

    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        scanf("%d", &array2[i]);
    }


    int greatest = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (array1[i] == array2[j]) {
                if (array1[i] > greatest) {
                    greatest = array1[i];
                }
            }
        }
    }



    printf("PGCD=%d\n", greatest);

}

int main() {
    exo4();
    return 0;
}