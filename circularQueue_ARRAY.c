#include<stdio.h>
int n=5,queue[50],front=-1,rear=-1;
void cenqueue(int item)
{
    if(front==(rear+1)%n)
    {
        printf("Circular queue Ovverflow");
    }
    else
    {
        if(front==-1 && rear==-1)
        {
            front=0;
        }
        rear=(rear+1)%n;
        queue[rear]=item;
        printf("\nelement is inserted\n");
    }
}
int dequeue(int item)
{
    if(front==-1 && front==(rear+1)%n)
        printf("Underflow");
    else
    {
        item=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%n;
        }
        return item;
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i=(i+1)%n)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    int a,b;
    cenqueue(1);
    cenqueue(2);
    cenqueue(3);
    display();
    a=dequeue(b);
    printf("\nthe deleted element is %d\n",a);
    display();
}