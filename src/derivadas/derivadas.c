#include "../include/derivadas.h"
#include "../include/trigonometricas.h"


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