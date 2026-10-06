#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
// Enqueue
void insert(int item)
{
    if(rear == MAX-1)
    {
        printf("Queue Overflow.\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear = rear+1;
        queue[rear] = item;
    }
}
// Dequeue
void Delete()
{
    if(front == -1 || front>rear)
    {
        printf("Queue Underflow.\n");
    }
    else
    {
        printf("Deleted item: %d\n",queue[front]);
        front++;
    }

    if(front>rear)
        front = rear = -1;
}
// Display
void display()
{
     if(front == -1 || front>rear)
    {
        printf("Queue Empty.\n");
    }
    else
    {
        int i;
        for(i=front; i<=rear; i++)
        {
            printf("%d \n",queue[i]);
        }
    }
     if(front>rear)
        front = rear = -1;
}

int main()
{
    int choice;
    do{
        printf("Enter Choice: [1]Insert, [2]Delete, [3]Display, [4]Exit:\n");
        int item;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter input: \n");
            scanf("%d",&item);
            insert(item);
            break;
        case 2:
            Delete();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...");
            exit(0);
            break;
        default:
            printf("Invalid Choice...\n");
            break;
        }
    }while(1);
    return 0;
}
