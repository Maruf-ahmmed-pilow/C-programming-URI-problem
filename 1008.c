#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    double c;
    scanf("%lf",&c);
    c = b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %0.2lf\n",c);
    return 0;
}
