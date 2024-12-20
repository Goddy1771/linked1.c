#include<stdio.h>
#define n 7
int stack[n];
int top=-1;
int push(int item)
{
    if(top==n-1)
    {printf("stack is full/n");}
    else
    {
        top=top+1;
        stack[top]=item;
        {printf("Item  %d inserted/n",item);}
    }
}
void pop()
{
    if(top==-1)
    {printf("Stack is empty/n");}
    else
    { 
        int item=stack[top];
        top = top - 1;
        {printf("Item  %d deleted/n",item);}
    }
}
void display()
{int i;
    if(top==-1)
    {printf("Stack is empty/n");}
    else
    {
        for( i= top;i>=0;i--)
        {printf("%d",stack[i]);}
    }
}
int main()
{
    {printf("Stack specification/n");}

push(10);
push(20);
display();
pop();
display();
return 0;
}
