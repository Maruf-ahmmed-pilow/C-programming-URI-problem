#include<stdio.h>
#include<stdlib.h>

    Node *prepend(Node *head,int item)
    {
    Node *new_node=creat_node(item,head);
    return new_node;
}
int main()
{
    Node*n1,n2,*head,n3;
    n1=creat_node(10,NULL);
    head=n1;
    n2=head;
    printf("first data = %d\n",n2->data);
    n3 =n2->next;
    printf("second data =%d\n",n3->data);
    reurn 0;
    return 0;
}
