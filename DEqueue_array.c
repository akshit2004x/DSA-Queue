#include<stdio.h>
int n=7,queue[100],front=-1,rear=-1;
void enqueue_rear(int x)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    queue[rear]=x;
};
void enqueue_front(int x)
{
    front--;
    queue[front]=x;
};
int dequeue_front()
{
    int item;
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
int dequeue_rear()
{
    int item;
    item=queue[rear];
    if(front==rear)
        printf("Now queue is empty");
    else
        rear--;
    return item;
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
    enqueue_rear(1);
    enqueue_rear(2);
    enqueue_rear(3);
    enqueue_front(5);
    display();
    //dequeue_front();
    dequeue_rear();
   display();
}