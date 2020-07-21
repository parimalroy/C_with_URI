#include<stdio.h>
int main(){
    int N,YEAR,MONTH,EXTDAY,DAY;
    scanf("%d",&N);
    YEAR=N/365;
    EXTDAY=N%365;
    MONTH=EXTDAY/30;
    DAY=EXTDAY%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",YEAR,MONTH,DAY);
    return 0;
}
