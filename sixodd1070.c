#include<stdio.h>
int main(){
    int X,i,count=0,totalCount;
    scanf("%d",&X);
    //count=(X%2==!0);

    for(i=X; i<=20; i++ ){
        if(X%2==0){
            count+=1;
            //if(count>6){break;}
        }
        printf("%d\n",X);
    }
    return 0;
}
