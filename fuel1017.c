#include<stdio.h>
int main(){
    int TIME,SPEED;
    double FUEL;
    scanf("%d %d",&TIME,&SPEED);
    FUEL=(TIME*SPEED)/12.0;
    printf("%0.3lf\n",FUEL);
    return 0;
}
