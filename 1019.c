#include<stdio.h>
int main()
{
    int h,m,s;
    scanf("%d",&s);
    h=s/(60*60);
    s=s%(60*60);
    m=s/60;
    s=s%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;

}
