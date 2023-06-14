#include <stdio.h>
#define H 0.00001

double func(double x){
    return x;
}

double derivadaAvancada(double x){
    double funcDeri = (func(x+H)-func(x))/H;
    return funcDeri;
}

double derivadaRecuada(double x){
    double funcDeri = (func(x) - func(x-H))/H;
    return funcDeri;
}

double derivadaCentrada(double x){
    double funcDeri = (func(x+H) - func(x-H))/(2*H);
    return funcDeri;
}

void main(){
    derivadaAvancada(1);
    printf("funciona agora?\n");
}

