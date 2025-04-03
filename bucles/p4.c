#include <stdio.h>
void main() {
    int num, contador = 0;
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    
    num = num < 0 ? -num : num;
    
    do {
        num /= 10;
        contador++;
    } while (num > 0);
    
    printf("El número tiene %d dígitos.\n", contador);
}

