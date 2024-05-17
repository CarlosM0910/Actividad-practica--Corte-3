#include <stdio.h>

#define filas 3
#define columnas 3

int main() {
    int arreglo[filas][columnas];
    int i, j;
    int numero = 0;
    int numeroBuscado;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            arreglo[i][j] = numero++;
        }
    }

    printf("El arreglo es:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", arreglo[i][j]);
        }
        printf("\n");
    }

    printf("Ingrese el número que va a buscar: ");
    scanf("%d", &numeroBuscado);

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            if (arreglo[i][j] == numeroBuscado) {
                printf("El numero esta en la posicion(%d, %d)\n",i, j);
                return 0;
            }
        }
    }
    printf("No se encontró el número %d en el arreglo\n", numeroBuscado);
    return 0;
}
