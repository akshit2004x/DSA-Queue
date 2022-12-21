#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue(int x)
{
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new->data=x;
    new->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=new;
        rear=new; 
        rear->next=front;
    }
    else
    {
        rear->next=new;
        rear=new;
        rear->next=front;
    }
}
void dequeue(int item)
{
    struct node *temp;
    temp=front;
    if(front==0 & rear==0)
    { 

    };
    if(front==rear)
    {
        front=rear=0;
    }
    else
    {
    front=front->next;
    rear->next=front;
    item=temp->data;
    free(temp);
    }
}
void display()
{
    struct node *temp=front;
    do
    {
        printf("\n");
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=rear);
    printf("\n%d",temp->data);
}
int main()
{
    int b;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue(b);
    display();
}