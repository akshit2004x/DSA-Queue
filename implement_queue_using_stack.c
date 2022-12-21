#include<stdio.h>
int stack1[100],stack2[200];
int top1=-1,top2=-1,count=0;
void push1(int x)
{
    top1++;
    stack1[top1]=x;
};
int pop1()
{
    int a;
    a=stack1[top1--];
    return a;
};
void push2(int x)
{
    top2++;
    stack2[top2]=x;
};
int pop2()
{
    int a;
    a=stack2[top2--];
    return a;
};
void enqueue(int x)
{
    push1(x);
    count++;
};
void dequeue()
{
    int i,a,b;
    if(top1==-1 && top2==-1)
        printf("Queue is empty");
    else 
    {
        for(i=0;i<=count;i++)
        {
            a=pop1();
            push2(a);
        }
        count--;
        for(i=0;i<=count;i++)
        {
            b=pop2();
            push1(b);
        }
    }
};
void display()
{
    for(int i=0;i<=top1;i++)
        printf("%d\n",stack1[i]);
};
int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(-1);
    dequeue();
    enqueue(7);
    display();
}