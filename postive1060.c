#include<stdio.h>
int main(){
    double X;
    int i,postive=0;
    for(i=1;i<=6;i++){
        scanf("%lf",&X);
        if(X>0){
            postive+=1;
        }
    }
    printf("%d valores positivos\n",postive);
    return 0;
}
