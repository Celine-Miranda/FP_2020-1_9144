#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[]){
	//Se declaran variables y valores
	double x=0;

	//Se utiliza for como estructura de repetición
	//Se convirten argumentos a flot
	for(int i=1; i<argc;i++){
		double y=atof(argv[i]);
		x=y+x;
	}
	//Se establece la operacion para obtener el promedio
	double promedio=x/(argc-1);
	printf("%.2lf\n",promedio);

	return 0;
}