#include <stdio.h>
#include <stdlib.h>//se declaran las librerias a utilizar
int APRETONES(int personas){//aquì se delaran las variables 
  int res;//valores
  int z;//valores
  if(personas==1){//primera funcion que se desarrolla en el programa
    return 0;
  }else{
    z=APRETONES(personas-1)+(personas-1);//la operacion para obtener los saludos
    return z;
  }
}
int main(int argc, char*argv[]) {//funcion
int a, ans;//se declaran los valores
a=atoi(argv[1]);//se lleva acabo la funcion
ans=APRETONES(a);//También se lleva acabo la funcion
printf("%i\n",ans);//Se ejecuta la operacion 
return 0;//finaliza el programa
}
