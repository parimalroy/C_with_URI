#include<stdio.h>
int main(){
    int X;
    double Y,KM;
    scanf("%d%lf",&X,&Y);
    KM=X/Y;
    printf("%0.3lf km/l\n",KM);
    return 0;
}
