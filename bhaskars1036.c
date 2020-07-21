#include<stdio.h>
int main(){
    double A,B,C,X1,X2,sq1,sq2;
    scanf("%lf%lf%lf",&A,&B,&C);
    sq1=sqrt((B*B)-(4*A*C));
    sq2=sqrt((B*B)-(4*A*C));
    X1=(-B+sq1)/(2*A);
    X2=(-B-sq2)/(2*A);
    if(A>0 && 0<B && sq1>0 && 0<sq2 ){
    printf("R1 = %0.5lf\nR2 = %0.5lf\n",X1,X2);
    }
    else{
        printf("Impossivel calcular\n");
    }
return 0;
}
