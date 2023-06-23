#include <stdio.h>
#include <math.h>

double funcRX(double x){
    double retorno = 1/sin(cos(x+1));
    return retorno;
}

double funcDeriRX(double x){
    double f = sin(x+1)*cos(cos(x+1));
    double g = sin(cos(x+1))*sin(cos(x+1));
    double funcDeri = f/g;
    return funcDeri;
}

double derivadaAvancada(double x, double H){
    double funcDeri = (funcRX(x+H)-funcRX(x))/H;
    return funcDeri;
}

double derivadaRecuada(double x, double H){
    double funcDeri = (funcRX(x)-funcRX(x-H))/H;
    return funcDeri;
}

double derivadaCentrada(double x, double H){
    double funcDeri = (funcRX(x+H) - funcRX(x-H))/(2*H);
    return funcDeri;
}


void main(){
    double d=0, H=1;
    double av, rec, cen; 

    H=1;
    printf("\nFunção r(x):\n");
    printf("Valor de entrada: %lf\n", d);
    printf("Valor da função neste ponto: %.12lf\n", funcRX(d));
    double RX = funcDeriRX(d);
    printf("Valor da função derivada neste ponto: %.12lf\n", RX);
    printf("\n\n");
    printf("Valor da função derivada a partir da definição de limite neste ponto: \n");
    for(int i=0; i<18; i++){
        printf("\n**********************************\n");
        printf("Valor esperado: %.12lf\n", RX);
        printf("Iteração %d\nValor de H: %0.17lf\n", i+1, H);
        av=derivadaAvancada(d,H);
        printf("Derivada Avançada %0.13lf\n", av);

        rec = derivadaRecuada(d,H);
        printf("Derivada Recuada %0.13lf\n", rec);

        cen = derivadaCentrada(d,H);
        printf("Derivada Centrada %0.13lf\n", cen);
        printf("\n**********************************\n");
        H /=10;
    }
}

