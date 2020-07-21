#include<stdio.h>
int main(){
    double range, novo, reajuste;
    scanf("%lf",&range);
    if(range>=0 && range<=400.00){
        reajuste=(range*(15.0/100));
        novo=range+reajuste;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 %%\n",novo,reajuste);
    }
    else if(range>=400.01 && range<=800.00){
        reajuste=(range*(12.0/100));
        novo=range+reajuste;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 %%\n",novo,reajuste);
    }
    else if(range>=800.01 && range<=1200.00){
        reajuste=(range*(10.0/100));
        novo=range+reajuste;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 %%\n",novo,reajuste);
    }
    else if(range>=1200.01 && range<=2000.00){
        reajuste=(range*(7.0/100));
        novo=range+reajuste;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 %%\n",novo,reajuste);
    }
    else if(range>=2000.00){
        reajuste=(range*(4.0/100));
        novo=range+reajuste;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 %%\n",novo,reajuste);
    }
    return 0;
}
