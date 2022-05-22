#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
int top=-1;
int stack[CAPACITY];
void push(int);
int pop();
int isFull();
int isEmpty();
void traverse();
void peek();

int main()
{
    int ch,item;
    while(1)
    {
        printf("1.Push element \n");
        printf("2.Pop\n");
        printf("3.peek\n");
        printf("4.Traverse \n");
        printf("5.Quit\n");
        printf("Enter Your Choice \n");
        scanf("%d",&ch);


    switch(ch)
    {
        case 1:
            printf("Enter Elements to push\n");
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            item = pop();
            if(item==0)
            {
                printf("No Elemens ");
            }
            else
            {
                printf("Item Deleteed : %d \n",item);

            }
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 5:
            exit(0);
            break;
        default :
            printf("Invalid input\n ");

    }
    }
}
void push(int ele)
{
    if(isFull())
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        stack[top]=ele;
        printf("Element inserted\n");
    }
}
int pop()
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
void peek()
{
    if(isEmpty())
    {
        printf("Empty Elements \n");
    }
    else
    {
        printf("top elements is %d \n ",stack[top]);
    }
}
void traverse()
{
    if(isEmpty())
    {
        printf("No Elementts ");
    }
    else
    {
        int i;
        printf("Stack Elements are \n");
        for(i=0;i<=top;i++)
        {
            printf("%d \n",stack[i]);
        }
    }
}
int isFull()
{
    if(top==CAPACITY)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


