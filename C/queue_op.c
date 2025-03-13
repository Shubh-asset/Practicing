#include<stdio.h>
#include<string.h>

// int stack[10], choice, n, top, x, i;

// void push();
// void pop();
// void display();

// int main(int argc, char const *argv[])
// {
//     top = -1;
//     printf("\nEnter the size of STACK: ");
//     scanf("%d", &n);
//     printf("\nSTACK IMPLEMENTATION USING ARRAYS\n");
    
//     do
//     {
//         printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             break;

//         default:
//         printf("\nInvalid Input\n");
//             break;
//         }

//     } while (choice != 4);
    

//     return 0;
// }

// void push()
//     {
//         if (top>=n-1)   
//         {
//             printf("\nStack is Overflow\n");
//         }
//         else
//         {
//             printf("Enter a value to be Pushed: ");
//             scanf("%d", &x);
//             top++;
//             stack[top]=x;
//         }
        
//     }
// void pop()
// {
//     if (top<=-1)
//     {
//         printf("Stack is Underflow ");
//     }
//     else
//     {
//         printf("\nThe poped element is %d", stack[top]);
//         top--;
//     }
    
// }
// void display()
// {
//     if (top>=0)
//     {
//         printf("Elements in the stack\n");
//         for ( i = top; i >= 0; i--)
//         {
//             printf("%d\n", stack[i]);
//         }
    
//     }
//     else
//         {
//             printf("\nEmpty Stack\n");
//         }
    
// }


#define MAX 5
void insert();
void dlt();
void display();

int front = -1, rear=-1, queue[MAX];

void main()
{
    int choice;
    while (choice!=4)
    {
        printf("\n**Main Menu**\n");
        printf("\n1.insert an element\n2.delete and element\n3.display the queue\n4.exit\n");
        printf("your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            dlt();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
    
        default:
            printf("\ninvalid input\n");
            break;
        }
    }
    

    return 0;
}

void insert()
{
    int item;
    printf("\nEnter the element\n");
    scanf("%d", &item);

    if (rear == MAX -1)
    {
        printf("\nOverflow\n");
        return;
    }
    else if ((front == -1)&&(rear == -1))
    {
        front = 0, rear = 0;
    }
    else{
        rear++;
        queue[rear] =item;
        printf("\nValue inserted");
    }
        
}

void dlt()
{
    int item;
    if ((front == -1)||(front>rear))
    {
        printf("\nUnderflow");
        return ;
    }
    else{
        item = queue[front];
        if (front == rear)
        {
            front = -1; rear = -1;
        }
        else{
            front++;
        }
        printf("\n value deleted");
        
    }
    
}

void display()
{
    int i;
    if (rear==-1)
    {
        printf("Empty queue");
    }
    else
    {
        printf("queue is: \n");
        printf("\n");
        for ( i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
    
}