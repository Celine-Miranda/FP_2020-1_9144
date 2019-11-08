#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argu[]){
	//primero tenemos que declarar las variables
	int a;
	int b;
	int c=1;
	a=atof(argu[1]);
	b=atof(argu[2]);
	//aquí se declara en donde se guarda
	for(int i=0; i<b; i++){
	//establecemos la operacion de multiplicación
	c=c*a;
	}
	//se imprime el resultado
	printf("%.2d\n", c);

	return 0;
}