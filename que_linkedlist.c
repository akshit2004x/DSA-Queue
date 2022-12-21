#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front,*rear;
void enqueue(int item)
{
    struct node *new;
    new = (struct node *)malloc(sizeof (struct node));
    new->data=item;
    new->next=NULL;
    if(front==NULL)
    {
        front=new;
        rear=new;
    }
    else
    {
        rear->next=new;
        rear=new;
    }
    printf("\nelement inserted succesfully\n");
}
int dequeue(int item)
{
    if(front==NULL)
        printf("underflow");
    else
    {
        struct node* temp=front;
        item=temp->data;
        front=front->next;
        free(temp);
        return item;
    }
}
void display()
{
    struct node *temp;
    for(temp=front;temp<=rear;temp=temp->next)
    {
        printf("\n");
        printf("%d ",temp->data);
    }
}
int main()
{
    int a,b;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    //display();
    a=dequeue(b);
    printf("\nelement deleted is %d\n ",a);
    display();
}