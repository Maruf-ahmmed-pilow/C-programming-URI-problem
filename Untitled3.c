#include<stdio.h>
#define MAX 5
void push();
void pop();
void display();
void top();
int stack[MAX];
int Top = -1;
void push()
{
    int element;
    if(Top==MAX-1)
    {
        printf("your stack is full ");
    }
    else
    {
        printf("Enter your element to be pushed ");
        scanf("%d",&element );
        stack[Top++]=element;
    }
}
void pop()
{
    if(Top==-1)
    {
        printf("Your stack is empty ");

    }
    else
    {
        printf("deleted item is = %d ",stack[Top]);
        Top--;
    }
}
void top()
{
    if(Top==-1)
    {
        printf("Your stack is empty");
    }
    else
        printf("now top element is = %d",stack[Top]);
}
void display()
{
    int i;
    printf("\t Your stack = ");
    for(i=Top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
}
int main()
{

    while(1)
    {
        int n;
        printf("\t\t\t STACK \n1.push\n2.pop\n3.top\n4.display\n");
        printf("press your choice = ");
        scanf("%d",&n);
        if(n==1)
        {
          push();
          display();
        }
        else if(n==2)
        {
          pop();
          display();
        }
        else if(n==3)
        {
          top();
          display();
        }
        else if(n==4)
        {

          display();
        }
        else
          {
            printf("try again ");
             break;
          }

    }
}

