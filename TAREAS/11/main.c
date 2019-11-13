#include <stdio.h>
#include <stdlib.h>
#include <math.h>//se tienen que declarar las librerias
double RAIZ(double x, double tol, double candidato){//aquí se declaran variables
  double division, diferencia, promedio;//y las operaciones
  division=x/candidato;
  diferencia=fabs(division-candidato);//la división que se ejecutará
  while(diferencia>tol){//se pone while para el ciclo y la operacion de el diferencial y el total
    division=x/candidato;
    diferencia=fabs(division-candidato);//se ejecuta la operacion
    promedio=(candidato+division)/2;//metodo para obtener el promedio
    candidato=promedio;//se igualan ambos
  }
  return candidato;//finaliza el ciclo
}
int main(int argc, char*argv[]) {//de la misma forma se declaran varibles
double numero, tolerancia, ans, candidato;//se declaran los valores
numero=atof(argv[1]);//operacion
candidato=atof(argv[3]);//operacion
tolerancia=atof(argv[2]);//operacion
ans=RAIZ(numero, tolerancia, candidato);// aqui la raiz toma los resultados obtenidos.
printf("%lf\n",ans);//operacion
return 0;//finalizado el programa
}