#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
struct Node{
int data;
struct Node*next;
struct Node*prev;
};
struct Node* head;
struct Node*GetNewNode(int x){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node))
newNode->data=x;
newNode->prev=NULL;
newNode->next=NULL;
return newNode;
};
void InsertAHead(int x){
struct Node * temp=(struct Node*)malloc(sizeof(struct Node))
temp->data = x;
temp->prev = NULL;
temp->next = NULL;

}
void PeversePrint(){
struct Node* temp=head;
if(temp==NULL)return;
while(temp!=NULL){
    printf("%d"temp->data);
    temp=temp->prev;
}
printf("\n");
}
int main()
{
    head = NULL;
    InsertAthead(2);ReversePrint();
    InsertAthead(4);ReversePrint();
    InsertAthead(6);ReversePrint();

}
