#include<stdio.h>
#define MAX 2
int q[MAX],r=-1,f=-1;
void insert();
void display();
void deleteL();
int main()
{
    int element,choice;
    while(1)
    {
        printf("\nEnter the choice(1.insert\n2.display\n3.delete\n)");
        scanf("%d",&element);
        switch(choice)
        {
            case 1:insert();break;
            case 2:display();break;
            case 3:deleteL();break;
            case 4:exit(1);break;
            default:printf("Enter the correct choice\n");
        }
    }
    return 0;
}
void insert()
{
    if(r = MAX -1)
    {
        printf("Queue is full\n");
    }
    else
    {
        int element;
        printf("Enter the element\n");
        scanf("%d",&element);
        {

        }
    }
}
void display()
{
    int i;
    if(r==-1)
    {
        printf("queue is empty,mothing to display\n");
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("%d",q[i]);
        }
    }
}
void deleteL()
{
    int element;
    if(r==-1)
        {
            element=q[f];
            r=f=-1;
        }
        else
        {
            element=q[f];
            f++;
        }
}

