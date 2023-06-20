#include "../include/derivadas.h"
#include "../include/trigonometricas.h"
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