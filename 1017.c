#include<stdio.h>
int main()
{
    int time,speed,distance;
    scanf("%d %d",&time,&speed);
    distance=time*speed;
    printf("%0.3f\n",distance/12.0);
    return 0;
}
