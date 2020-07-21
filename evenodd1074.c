#include<stdio.h>
int main(){
    int N,i,INPUT;
    scanf("%d",&N);
    for(i=1;i<N;i++){
        scanf("%d\n",&INPUT);

        if(INPUT<0){
                printf("ODD NEGATIVE");
        }
        else if(INPUT==0){
                printf("NULL");
        }
        else if(INPUT%2==!0){
                printf("ODD POSITIVE");
        }
        else if(INPUT%2==0 && INPUT<0){
                printf("EVEN NEGATIVE");
        }

    }
    return 0;
}
