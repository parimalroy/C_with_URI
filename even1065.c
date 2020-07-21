#include<stdio.h>
int main(){
    int X,i,sum=0;
    for(i=1;i<=5;i++){
        scanf("%d",&X);
        if(X%2==0){
          sum+=1;
        }
    }
    printf("%d valores pares\n",sum);

return 0;
}
