#include "../include/trigonometricas.h"
#include <math.h>
double funcFX(double x){
    double retorno = sin(pow(x,2)+sqrt(x));
    return retorno;
}
double funcGX(double x){
    double tangente = pow(x,2)+sqrt(x+1);
    tangente = pow(tangente, -1);
    double retorno = sin(tangente);
    return retorno;
}

double funcHX(double x){
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