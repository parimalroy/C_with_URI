#include<stdio.h>
int main(){
    double X1,X2,Y1,Y2,D,result;
    scanf("%lf%lf",&X1,&Y1);
    scanf("%lf%lf",&X2,&Y2);
    D=(X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1);
    result=sqrt(D);
    printf("%0.4lf\n",result);
    return 0;
}
