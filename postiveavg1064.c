#include<stdio.h>
int main(){
    double X,i,avg=0;
    int sum=0;
    for(i=1;i<=6;i++){
        scanf("%lf",&X);
        if(X>0){
            sum+=1;
            avg+=X;
        }
    }
    printf("%d valores positivos\n%0.1lf\n",sum,avg/sum);
    return 0;
}
