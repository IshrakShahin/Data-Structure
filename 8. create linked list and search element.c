#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct linked_list
{
int num;
struct linked_list *next;
};

typedef struct linked_list node;
main()
{
    int n,i,loc,item;
    node *start,*ptr;
    start=(node*) malloc(sizeof(node));
    ptr=start;
    printf("how many elements: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("input a number:");
        scanf("%d",&ptr->num);
        if(i!=n)
        {
            ptr->next=(node*) malloc(sizeof(node));
            ptr=ptr->next;

        }
    }

    ptr->next = NULL;
    ptr=start;
    loc=NULL;
    printf("Enter the number searching element: ");
    scanf("%d",&item);
    ptr =start;

     while(ptr!=NULL)
    {
		if (item==ptr->num)
			{
				loc =ptr;
				break;
			}
    else
        ptr=ptr->next;

    }
    if(loc==0)
        printf("item is not here\n");
    else
        printf("%d is the address of item %d\n",loc,item);

}
