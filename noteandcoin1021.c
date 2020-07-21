#include<stdio.h>
int main(){
    double L;
    int N,A,B,C,D,E,F,G,H,I,J,K,M;
    scanf("%lf",&L);
    N=L*100;
    A=N/10000;
    N=N%10000;
    B=N/5000;
    N=N%5000;
    C=N/2000;
    N=N%2000;
    D=N/1000;
    N=N%1000;
    E=N/500;
    N=N%500;
    F=N/200;
    N=N%200;
    G=N/100;
    N=N%100;
    H=N/50;
    N=N%50;
    I=N/25;
    N=N%25;
    J=N/10;
    N=N%10;
    K=N/5;
    N=N%5;
    M=N/1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",A);
    printf("%d nota(s) de R$ 50.00\n",B);
    printf("%d nota(s) de R$ 20.00\n",C);
    printf("%d nota(s) de R$ 10.00\n",D);
    printf("%d nota(s) de R$ 5.00\n",E);
    printf("%d nota(s) de R$ 2.00\nMOEDAS:\n",F);
    printf("%d nota(s) de R$ 1.00\n",G);
    printf("%d nota(s) de R$ 0.50\n",H);
    printf("%d nota(s) de R$ 0.25\n",I);
    printf("%d nota(s) de R$ 0.10\n",J);
    printf("%d nota(s) de R$ 0.05\n",K);
    printf("%d nota(s) de R$ 0.01\n",M);


    return 0;
}
