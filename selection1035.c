#include<stdio.h>
int main(){
    int A,B,C,D,sumab,sumcd,OO=0;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    sumab=A+B;
    sumcd=C+D;
    if(B>C && A<D){
        if(sumcd>sumab && C>OO && OO<D && A%2==OO){
            printf("Valores aceitos\n");
        }
        else{
         printf("Valores nao aceitos\n");
        }
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}
