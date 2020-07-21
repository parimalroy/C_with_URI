#include<stdio.h>
int main(){
    int N,TIME,HOURS,MINUTE,SMEMIN,SECOND;
    scanf("%d",&N);
    HOURS=N/3600;
    SMEMIN=N%3600;
    MINUTE=SMEMIN/60;
    SECOND=N%60;
    printf("%d:%d:%d\n",HOURS,MINUTE,SECOND);
    return 0;
}
