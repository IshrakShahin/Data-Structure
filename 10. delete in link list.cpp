#include <bits/stdc++.h>
using namespace std;

struct linked_list
{
    int num;
    linked_list *next;
};
typedef struct linked_list node;

node *start, *ptr, *loc, *locp, *avail, *save;


void findB()
{
    if(start == NULL)
    {
        loc = NULL;
        locp = NULL;
        return;
    }

    int item;
    cout<<"Enter the item to delete: ";
    cin>>item;

    if(start->num == item)
    {
        loc = start;
        locp = NULL;
        return;
    }
    save = start;
    ptr = start->next;
    while(ptr != NULL)
    {
        if(ptr->num == item)
        {
            loc = ptr;
            locp = save;
            return;
        }
        save = ptr;
        ptr = ptr->next;
    }
    loc = NULL;
    return;
}

void delet()
{
    findB();
    if(loc == NULL)
    {
        cout<<"Item is not found in list";
        return;
    }
    if(locp == NULL)
        start = start->next;
    else
        locp->next = loc->next;


    loc->next = avail;
    avail = loc;

    return;
}

int main()
{
    int i, n;

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

    cout<<"The numbers are: "<<endl;
    while(ptr != NULL)
    {
        cout<<ptr->num<<endl;
        ptr = ptr->next;
    }

    //findB();
    delet();

    ptr = start;
    cout<<"\n\nNow the numbers are: "<<endl;
    while(ptr != NULL)
    {
        cout<<ptr->num<<endl;
        ptr = ptr->next;
    }
}



