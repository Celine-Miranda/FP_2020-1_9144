#include <stdio.h>
#include <stdlib.h>
	int main (int argc, char* argu[]){
	//Para guardar la lista de argu se tiene que declarar otra lista
	//argc hace referencia al numero de argumentos
	//se declara la variable suma
	int lista[argc],suma=0;
 	//Para mayor exactitud tenemos que declarar al promedio como un
 	//numero real debido a que con esto nuestro resultado lo obtenemos 
	//con decimales
	float promedio;
	//utilizamos for para asi poder copiar argu a la lista
	//iniciamos con 1
	for (int i = 1; i < argc; i++){
	lista[i]= atoi(argu[i]);
	}
	//De nuevo utilizamos for pero esta vez para sumar
	//los elementos que contiene la lista
	//Como iniciamos con suma=0 entonces la primera ejecucion del
	//programa será suma=lista[1] y la segunda vez que repita el
	//proceso será suma=lista[1]+lista[2], esto lo repetirá ciclicamente
	for (int i = 1; i < argc; i++){
	suma=suma+lista[i];
	}
	//Para obtener el promedio a la suma que realizamos se tiene que
	//dividir por argc-1 para así poder quitar el ./main y nuestro 
	//programa sólo tome en cuenta los números que entran
	promedio=(float)suma/(argc-1);
	printf("%f\n",promedio);
	return 0;
}