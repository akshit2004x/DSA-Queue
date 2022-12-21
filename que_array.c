#include<stdio.h>
int n=5,queue[50],front=-1,rear=-1;
int enqueue(int item)
{
    if(rear==n-1)
    {
        printf("Queue is overflow ");
    }
    else
    {
        if(front==-1 && rear==-1)
        {
            front=rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=item;
        printf("element is inserted\n");
    }
};
int dequeue(int item)
{
    if(front==-1 && front>rear)
        printf("underflow");
    else
    {
        item=queue[front];
        if(front==rear)
            printf("Now queue is empty");
        else
            front=front+1;
        return item;
    }
};
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
};
int main()
{
    int a,item;
    printf("enter element you want to insert");
    scanf("%d",&item);
    enqueue(item);
    //display(queue,front,rear);
    enqueue(2);
    enqueue(3);
    printf("\nfront=%d rear=%d\n",front,rear);
    a=dequeue(item);
    printf("\nthe deleted element = %d\n",a);
    display(queue);
}