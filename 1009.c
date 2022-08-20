#include<stdio.h>
int main()
{
    char name[50];
    scanf("%s",name);
    double salary,product,total_salary;
    scanf("%lf %lf",&salary,&product);
    total_salary = salary +(0.15*product);
    printf("TOTAL = R$ %0.2lf\n",total_salary);
    return 0;
}
