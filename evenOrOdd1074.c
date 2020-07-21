#include<stdio.h>
int main(){
    int N,i,IN;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&IN);
        if(IN==0){printf("NULL\n");}
        if(IN<0 && IN%2==0){printf("EVEN NEGATIVE\n");}
        if(IN<0 && IN%2==!0){printf("ODD NEGATIVE\n");}
        if(IN>0 && IN%2==!0){printf("ODD POSITIVE\n");}
        //if(IN>0 && IN%2==0){printf("EVEN POSITIVE\n");}


    }
    return 0;
}
