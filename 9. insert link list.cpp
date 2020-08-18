#include <bits/stdc++.h>
using namespace std;

struct linked_list
{
    int num;
    linked_list *next;
};
typedef struct linked_list node;
node *start, *ptr, *loc, *locp, *avail, *save, *NEW;
int item;
void findA()
{
    cout<<"enter the item to insert: ";
    cin>>item;

    if(start == NULL)
    {
        loc = NULL;
        return;
    }
    if(item < start->num)
    {
        loc == NULL;
        return;
    }
    save = start;
    ptr = start->next;

    while(ptr != NULL)
    {
        if(item < ptr->num)
        {
            loc = save;
            return;
        }
        save = ptr;
        ptr = ptr->next;
    }
    loc = save;
    return;
}
void insloc()
{
    findA();
    avail = new node;
    if(avail == NULL){
        cout<<"Overflow\n";
        return ;
    }

    NEW = avail;
    avail = avail->next;

    NEW->num = item;

    if(loc == NULL)
    {
        NEW->next = start;
        start = NEW;
    }
    else
    {
        NEW->next = loc->next;
        loc->next = NEW;
    }
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
    insloc();

    ptr = start;

    cout<<"Now the numbers are: "<<endl;
    while(ptr != NULL)
    {
        cout<<ptr->num<<endl;
        ptr = ptr->next;
    }
}
