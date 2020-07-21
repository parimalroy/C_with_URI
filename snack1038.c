#include<stdio.h>
int main(){
    int X,Y;
    double TOTAL;
    scanf("%d%d",&X,&Y);
    double item[]={4.0,4.50,5.00,2.00,1.50};
    TOTAL=item[X-1]*Y;
    printf("Total: R$ %0.2lf\n",TOTAL);
    return 0;
}
