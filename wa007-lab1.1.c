#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;

void push();
void pop();
void display();

int main()
{
    printf("Program on stack operations: ");
    while(1)
    {
        int choice;
        printf("\n\nEnter choice(1-4):");
        printf("\n1.push \n2.pop \n3.display \n4.exit \n= ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Error! Wrong choice...\nRetry...");
        }

    }
    return 0;
}

void push()
{
    if(top==MAX-1){
        printf("Error! Stack overflow. Can't push.");
    }
    else{
        int item;
        printf("Enter item to be pushed: ");
        scanf("%d",&item);
        top++;
        stack[top] = item;
    }
}

void pop()
{
    if(top==-1){
        printf("Error! Stack underflow. Can't pop.");
    }
    else{
        printf("Popped element: %d",stack[top]);
        top--;
    }
}

void display()
{
    if(top==-1){
        printf("Error! Stack is empty. Can't display.");
    }
    else{
        printf("Display stack (Top to Bottom): \n");
        for (int i=MAX-1;i>-1;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

