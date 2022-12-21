#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front,*rear;
void enqueue_r(int item)
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
void enqueue_f(int item)
{
    struct node *new=(struct node *)malloc(sizeof(struct node ));
    new->data=item;
    new->next=front;
    front=new;
}
int dequeu_r()
{
    struct node *p=front;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    p->next=NULL;
}
int dequeue_f()
{
    int item;
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
    enqueue_r(1);
    enqueue_r(2);
    enqueue_r(3);
    //display();
    dequeue_f(b);
    enqueue_f(1);
    dequeu_r();
    display();
}