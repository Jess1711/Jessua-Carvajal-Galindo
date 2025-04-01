#include <stdio.h>
int main(void) {
	int a=0;
	int b=0;
	printf("Ingrese el primer numero\n");
	scanf("%d",&a);
	printf("Ingresa el segundo numero\n");
	scanf("%d",&b);
	if(a > b){
		printf("El numero mayor es %d \n ",a);
	}else if(a < b){
		printf("El numero mayor es %d \n ",b);
	}else if (a = b){
		printf("los numeros son iguales \n ");
	}
	return 0;
}
