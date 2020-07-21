#include<stdio.h>
int main(){
    int X,i,EVEN=0,ODD=0,POSTIVE=0,NEGATIVE=0;
    for(i=1;i<=5;i++){
        scanf("%d",&X);
        if(X%2==0){
            EVEN+=1;
        }
        else{
            ODD+=1;
        }
        if(X>0){
            POSTIVE+=1;
        }
        if(X<0){
            NEGATIVE+=1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",EVEN,ODD,POSTIVE,NEGATIVE);
    return 0;
}
