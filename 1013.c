#include<stdio.h>
int main(){
    int a,b,c,max_value;
    scanf("%d%d%d",&a,&b,&c);
    max_value=a;
    if(max_value<b)
        max_value=b;
    if(max_value<c)
        max_value=c;
        printf("%d eh o maior\n",max_value);
    return 0;
}
