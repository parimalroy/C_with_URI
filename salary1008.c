#include<stdio.h>
int main(){
    int number;
    double work_hours,salary,month_salary;
    scanf("%d%lf%lf",&number,&work_hours,&salary);
    month_salary=work_hours*salary;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %0.2lf\n",month_salary);
    return 0;
}
