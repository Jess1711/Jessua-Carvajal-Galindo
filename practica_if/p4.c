#include <stdio.h>

int main(void) {
    int edad = 0;
    printf("Ingrese su edad \n");
    scanf("%d", &edad);

    if (edad < 13) {
        printf("Usted está en la infancia\n");
    } else if (edad >= 13 && edad <= 17) {
        printf("Usted está en la adolescencia\n");
    } else {
        printf("Usted está pasando por la adultez\n");
    }

    return 0;
}

