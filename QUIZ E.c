#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x=sum(a,b);
    printf("%d\n",x);
}
int sum(p,q)
{
    int sum1;
    sum1=p*q;
    return sum1;
}
