#include<stdio.h>
int main(){
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO,PI=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    TRIANGULO=0.5*A*C;
    CIRCULO=(PI*(C*C));
    TRAPEZIO=(0.5*(A+B)*C);
    QUADRADO=(B*B);
    RETANGULO=(A*B);
    printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n",
          TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
    return 0;
}
