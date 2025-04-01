#include <stdio.h>
int main(void) {
	int n=0;
	printf("Ingrese el numero\n");
	scanf("%d",&n);
	if(n%2==0){
		printf("el numero %d es par\n",n);
	} else {
		printf("el numero %d es impar\n",n);
	}
	return 0;
}
