#include<stdio.h>
int main(){
    char name[50];
    double price,bonus,salary_bonus,total_salary,result;
    scanf("%s",&name);
    scanf("%lf%lf",&total_salary,&price);
    bonus=price*0.15;
    result=total_salary+bonus;
    printf("TOTAL = R$ %0.2lf\n",result);
    return 0;
}
