#include <stdio.h>

#define tamaño 88

int main() {
    int arreglo[tamaño];
    int num;
    int j;
    int i;
    for(i = 0; i < tamaño; i++) {
        arreglo[i] = i+1;
    }

    printf("Ingrese el numero para buscar: ");
    scanf("%d", &num);
    
    for(j = 0; j < tamaño; j++) {
        if(arreglo[j] == num) {
            printf("El valor se encontró en la posición %d\n", j);
            return 0;
        }
    }
    printf("No se encontro el numero");
}
