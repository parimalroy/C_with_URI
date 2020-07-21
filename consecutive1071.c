#include<stdio.h>
int main(){
    int X,Y,i,sum=0;
    scanf("%d%d",&X,&Y);
    for(i=Y;i<X;i++){
        if(i>0 && i%2==!0){
           sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
