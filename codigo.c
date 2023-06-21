#include <stdio.h>
#include <math.h>
#define H 0.0001

double funcFX(double x){
    double retorno = sin(pow(x,2)+sqrt(x));
    return retorno;
}
double funcGX(double x){
    double tangente = pow(x,2)+sqrt(x+1);
    tangente = atan(tangente);
    double retorno = sin(tangente);
    return retorno;
    
}

double funcHX(double x){
    double retorno =sin(x) + cos(x);
    retorno /= tan(x);
    return cos(x);
}

double funcPX(double x){
    return tan(x);
}
double funcQX(double x){
    return x;
}
double funcRX(double x){

}

double derivadaAvancada(double x){
    double funcDeri = (funcGX(x+H)-funcGX(x))/H;
    return funcDeri;
}

double derivadaRecuada(double x){
    double funcDeri = (funcGX(x) - funcGX(x-H))/H;
    return funcDeri;
}

double derivadaCentrada(double x){
    double funcDeri = (funcGX(x+H) - funcGX(x-H))/(2*H);
    return funcDeri;
}


void main(){
    double i=0;
    i = funcGX(i);
    printf("funciona %lf\n", i);
}

