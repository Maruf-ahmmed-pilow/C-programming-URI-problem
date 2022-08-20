#include<stdio.h>
int main()
{
    char ch='f';

    if (ch<='a' && ch>='z')
    {
        printf("%c is lowest case\n",ch);
    }
    else if(ch<='A' && ch>='z')
    {
        printf("%c is upper case\n",ch);
    }
    return 0;
}
