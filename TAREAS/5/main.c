#include <stdio.h>
#include <stdlib.h>
char m;
int x;
int main(int argc, char*argv[]){
	for(int i=1; i<argc;i++){//para que el programa recorra los valores 
		//de entrada
		m=argv[i][0];//se usa el cero para que en realidad tenga el valor
		//de los argumentos y no solo los recorra
		if(m=='J'||m=='Q'||m=='K'||m=='A'){//si el valor es una letra
			switch (m){
				case 'J':
				printf("10\n");
				break;
				case'Q':
				printf("10\n");
				break;
				case 'K':
				printf("10\n");
				break;
				case 'A':
				printf("11\n");
			}
			}else{
			x=atoi(argv[1]);//en caso de que no sea una letra,se imprime el numero que se ingresa usando otro switch
			switch(x){
				case 2:
				printf("2\n");
				break;
				case 3:
				printf("3\n");
				break;
				case 4:
				printf("4\n");
				break;
				case 5:
				printf("5\n");
				break;
				case 6:
				printf("6\n");
				break;
				case 7:
				printf("7\n");
				break;
				case 8:
				printf("8\n");
				break;
				case 9:
				printf("9\n");
				break;
				case 10:
				printf("10\n");
				break;
				default:
				printf("Ingrese un número válido\n");
		}
		}
	}
	return 0;
}