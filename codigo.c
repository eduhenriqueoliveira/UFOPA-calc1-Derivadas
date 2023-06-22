#include <stdio.h>
#include <math.h>
//#define H 0.00000000001

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
    double retorno = sin(sqrt(x)/pow(x,2));
    return retorno;
}
double funcRX(double x){
    return (pow(x,2)-x);
}

double derivadaAvancada(double x, double H, int opc){
    double funcDeri;
    switch (opc){
        case 1:
            funcDeri = (funcFX(x+H)-funcFX(x))/H;
            break;
        case 2:
            funcDeri = (funcQX(x+H)-funcQX(x))/H;
            break;
    }
    //(funcRX(x+H)-funcRX(x))/H;
    
    return funcDeri;
}

double derivadaRecuada(double x, double H, int opc){
    double funcDeri; 
    switch (opc){
        case 1:
            funcDeri = (funcFX(x) - funcFX(x-H))/H;
            break;
        case 2:
            funcDeri = (funcQX(x)-funcQX(x-H))/H;
            break;
    }
    return funcDeri;
}

double derivadaCentrada(double x, double H, int opc){
    double funcDeri;
        switch (opc){
        case 1:
            funcDeri = (funcFX(x+H) - funcFX(x-H))/(2*H);
            break;
        case 2:
            funcDeri = (funcQX(x+H) - funcQX(x-H))/(2*H);
            break;
    }
    return funcDeri;
}


void main(){
    double d=1, H=1;
    printf("Valor de entrada: %lf\n", d);
    printf("Valor da função neste ponto: %lf\n", funcQX(d));
    double av, rec, cen; 
    for(int i=0; i<18; i++){
        printf("\n**********************************\n");
        printf("Iteração %d\nValor de H: %0.17lf\n", i+1, H);
        av=derivadaAvancada(d,H,2);
        printf("Derivada Avançada %0.13lf\n", av);

        rec = derivadaRecuada(d,H, 2);
        printf("Derivada Recuada %0.13lf\n", rec);

        cen = derivadaCentrada(d,H, 2);
        printf("Derivada Centrada %0.13lf\n", cen);
        printf("\n**********************************\n");
        H /=10;
    }
    
    
}

