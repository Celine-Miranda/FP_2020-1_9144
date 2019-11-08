#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]){
	//la variable x es lo que queremos sacar
	//la variable y es el valor a convertir 
	int x=atoi(argv[1]);
	int y=atoi(argv[2]);
	if(x!=0){
	//se realiza el cambio de fahrenhait a celsius
	float p= (y-32)/1.8;
	printf("%.2lf\n", p);
	}
	else{
	//este realiza cambio de celsius a fahrenhait
	float f= (y*1.8)+32;
	printf("%.2lf\n", f);
	}

	return 0;
}