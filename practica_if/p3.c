#include <stdio.h>
int main(void) {
	int año=0;
	printf("Ingrese el año que dese saber si es bisiesto\n");
	scanf("%d",&año);
	if ((año % 4 == 0) && (año % 100 != 0 || año % 400 == 0)) {
        printf("El año %d es bisiesto.\n", año);
    } else {
        printf("El año %d no es bisiesto.\n", año);
    }

    return 0;
}

