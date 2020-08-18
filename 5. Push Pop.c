#include<stdio.h>
#define max 50
int top=0;
int stack[50];
void show(int top,int value)
{
    int j;
    for(j=1; j<=top; j++)
        printf("%d ",stack[j]);
    printf("\n");
    return ;
}
void  push()
{
    int value;
    printf("the value push is: ");
    scanf("%d",&value);
    if(top<max)
    {
        top++;
        stack[top]=value;
        show(top,value);
    }
    else
    {
        printf("no value can be pushed as stack is full");
    }
}
void pop()
{
    int value;
    if(top > 0)
    {
        top--;
        show(top,value);
    }
    else
        printf("no value can be pop\n");

}
int menu(void)
{
    int choice;
    do
    {
        printf("1 push\n");
        printf("2 pop\n");
        printf("3 exit\n");
        scanf("%d",&choice);
    }
    while(choice<1 || choice>3);
    return (choice);
}
int main()
{
    int choice;
    do
    {
        choice=menu();
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("end of operation\n");
            break;
        }
    }
    while(choice!=3);
    return 0;
}
