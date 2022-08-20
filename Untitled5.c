#include<stdio.h>
int main()
{
    char ch='46';
    if (ch>='100' && ch<='33')
    {
        printf("%c the function is obviously true\n",ch);
    }
    else if (ch ='0' && ch<='0')
    {
        printf("%c is looser\n",ch);
    }
    return 0;
}

