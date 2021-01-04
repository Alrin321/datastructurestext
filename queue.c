#include<stdio.h>
#define SIZE 20
int a[SIZE];
int front=-1;
int rear=-1;
void  enqueue(int x)
{
    if((front==0)&&(rear==SIZE-1))
    {
        printf("full ,cannot be inserted");
    }
    else if(front==-1)
    {
        front++;
        rear++;
       a[rear]=x;
    }
   else
   {
      rear++;
      a[rear]=x;
   }


}

int dequeue()
{
    if(front==-1)
    {
        printf("\nempty,cannot delete an element");
    }
    else
    {
        int item =a[rear];
        front++;
        return item;
    }


}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf(" %d",a[i]);
    }
}
void main()
{
    int n=0,x;
    printf("Enter 1 for insertion ,2 for deletion,and -1 for exit");
    while(n!=-1)
    {
        printf("\nenter the key value to perform the operation");
        scanf("%d",&n);
        switch(n)
        {
         case 1:
             printf("\nEnter the element to be inserted");
             scanf("%d",&x);
             enqueue(x);
             printf("\nThe elements in  queue are:");
             display();
             break;
         case 2:
              dequeue();
              printf("\nThe queue is:");
              display();
              break;
         default:
             printf("\nno operation will be performed");
             break;
        }
    }

        }


