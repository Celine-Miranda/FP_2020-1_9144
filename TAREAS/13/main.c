#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argu[]){
	int numeros[argc-1];//se crea la lista de enteros
	int i=0, j=1, numero;//para que guarde a los argu se necesitan dos índices y la variable
	while(i<argc-1){
		numero=atoi(argu[j]);
		numeros[i]=numero;
		i++;
		j++;
	}
	int temporal;//otra variable para no perder datos
	for (i=1;i<argc-1;i++){
		for (j=0;j<argc-1-i;j++){
			//se comparan dos números de menor a mayor y se cambian numeros correctamente
			if(numeros[j]>numeros[j+1]){
				//guardado en temporal
				temporal=numeros[j];
				//se retrocede al número anterios
				numeros[j]=numeros[j+1];
				numeros[j+1]=temporal;

			}
		}
	}
	//lo imprimimos con for
	for(int i=0;i<argc-1;i++){
		printf("%i\n",numeros[i]);
	}
	return 0;//finaliza el programa
}