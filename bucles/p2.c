#include <stdio.h>

int main() {
    int N, suma = 0;
    printf("Ingrese un número entero: ");
    scanf("%d", &N);
    
    // Calculando la suma de los primeros N números naturales
    for (int i = 1; i <= N; i++) {
        suma += i;
    }
    
    printf("La suma de los primeros %d números naturales es: %d\n", N, suma);
    
    return 0;
}

