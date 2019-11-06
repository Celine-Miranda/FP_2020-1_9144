#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]){
	//nos ayuda a tomar valores que necesitamos que es la base 
	//y a que exponente lo queremos aumentar
	int b= atoi(argv[1]); //se declara la base
	int e= atoi(argv[2]); //se declara el exponente
	int p= pow(b,e); //se declara la función la cual realiza la operación
	printf("%i\n",p);

	return 0;
}