#include <stdio.h>
int main(void) {
	int a=0;
	printf("ingrese el numero entero\n");
	scanf("%d.",&a);
	if(a < 0){
		printf("El numero %d es un numero negativo\n",a);
	}else if(a > 0){
		printf("el numero %d \n es un numero positivo\n",a);
	}else {
		printf("El numero es igual que cero\n");
	}
	return 0;
}
