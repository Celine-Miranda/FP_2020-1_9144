#include <stdio.h>
#include <stdlib.h>
#include <math.h>//se declaran las librerias
int main(int argc, char*argv[]) {//se declaran las variables
double a, b, c, s, w, k, x1, x2, n, m, i1, i2, r1;//variables a utilizar
a=atof(argv[1]);
b=atof(argv[2]);
c=atof(argv[3]);
if(a!=0){//se declara la condicion con if
s=2*a;//operacion de multiplicación con el número dos
w=(b*b)-(4*a*c);//operacion multiplicación
if(w>=0){//se establece una declaracion de w,en el cual nos dice de donde partir
k=sqrt(w);//operacion
x1=(b+k)/s;//operacion
x2=(b-k)/s;//operacion
if(x1==x2){//se declara
printf("%.2lf\n",x1);
}else{
printf("%.2lf\n",x1);
printf("%.2lf\n",x2);
}
}else{
n=(4*a*c)-(b*b);//en este paso primero se multiplican y para después restarse
m=sqrt(n);//realizamos la operacion de sqrt
i1=m/s;//se establecen las operaciones de división
r1=b/s;
printf("%.2lf+%.2lfi\n",r1,i1);
printf("%.2lf-%.2lfi\n",r1,i1);
}
}
  return 0;//finaliza nuestro programa
}

