#include<stdio.h>
int main()
{
    int i,n,even[101];
    for (i=0;i<101;i++)
        {even[i]=1;
    }
    for (i=0;i<101;i+=2);{
        even[i];
    }
    scanf ("%d",&n);
    if (even[n]){
        printf("%d is a even number\n",n);
        }
        else{
        printf("%d is a odd nuber\n",n);
        }

    return 0;
}

