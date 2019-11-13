#include <stdio.h>
#include <stdlib.h>//se declaran las librerias a utilizar
int main(int argc, char*argv[]) {//esta es nuestra entrada
int t, sum;//se establecen valores para el programa
t=atoi(argv[1]);
sum=0;
while(t!=0){//ponemos while para el ciclo
sum=sum+(t%10);//se declara la operación de suma
t=(t/10);//y aquí la división
}
printf("%i\n", sum);//la división con el resultado que salio de valores anteriores
return 0;//con return 0 finalizamos el programa
}
