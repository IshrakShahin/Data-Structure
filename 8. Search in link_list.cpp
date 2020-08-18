#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

struct linked_list
{
    int num;
    linked_list *next;
};
typedef struct linked_list node;

int main()
{
    int i, n;
    node *start, *ptr;

    start = new node;
    ptr = start;

    cout<<"Enter how many number: ";
    cin>>n;

    cout<<"Enter the numbers: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>ptr->num;

        if(i != n-1)
        {
            ptr->next = new node;
            ptr = ptr->next;
        }
    }

    ptr->next = NULL;
    ptr = start;

    cout<<"Ther numbers are: "<<endl;
    while(ptr != NULL)
    {
        cout<<ptr->num<<" "<<ptr->next<<endl;
        ptr = ptr->next;
    }

    int item;
    int loc;
    cout<<"Enter the item to search: ";
    cin>>item;
    ptr = start;
    //loc = NULL;
    loc=0;
    while(ptr != NULL)
    {
        loc++;
        if(ptr->num == item)
        {
            //loc = ptr->num;
            break;
        }
        else
            ptr = ptr->next;
    }
    //cout<<"location: "<<loc<<endl;
    printf("location: %d   %d\n", loc,ptr);
}
