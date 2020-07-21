#include<stdio.h>
int main(){
    int pcode1,punit1,pcode2,punit2;
    double price1,price2,total_price;
    scanf("%d%d%lf",&pcode1,&punit1,&price1);
    scanf("%d%d%lf",&pcode2,&punit2,&price2);
    total_price=((punit1*price1)+(punit2*price2));
    printf("VALOR A PAGAR: R$ %0.2lf\n",total_price);

    return 0;
}
