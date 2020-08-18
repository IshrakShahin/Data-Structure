#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

struct nodetype
{
    int info;
    nodetype *left;
    nodetype *right;
};
typedef struct nodetype node;
node *root;

void insertnode(int item)
{
    node *p, *newnode, *back;

    p = root;
    back = NULL;

    newnode = new node;
    newnode->left = NULL;
    newnode->right =  NULL;
    newnode->info = item;

    while(p != NULL)
    {
        back = p;
        if(p->info > item)
            p = p->left;
        else
            p = p->right;
    }
    if(back == NULL)
        root = newnode;
    else if(back->info > item)
        back->left = newnode;
    else
        back->right = newnode;
    //return 0;
}
void inorder(node *p)
{
    if(p != NULL)
    {
        inorder(p->left);
        cout<<p->info<<" ";
        inorder(p->right);
    }
}
void preorder(node *p)
{
    if(p != NULL)
    {
        preorder(p->left);
        cout<<p->info<<" ";
        preorder(p->right);
    }
}
void postorder(node *p)
{
    if(p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->info<<" ";
    }
}
int menu()
{
    cout<<"\n\tMAIN MENU\n";
    cout<<"1. Insert\n";
    cout<<"2. Display\n";
    cout<<"3. Exit\n";

    int n;
    cin>>n;

    cout<<endl;
    return n;
}
void display()
{
    if(root)
    {
        cout<<"\nTraverse Tree Inorder\n";
        inorder(root);
        cout<<"\nTraverse Tree Preorder\n";
        preorder(root);
        cout<<"\nTraverse Tree Postorder\n";
        postorder(root);
    }
    else
        cout<<"\nBST is NULL\n";
}

int main()
{
    node *p;
    int val;

    root = NULL;
    char ch[11];
    int n = 2;

    n = menu();

    do
    {
        if(n == 1)
        {
            cout<<"Insert a value: ";
            cin>>val;
            insertnode(val);
        }
        if(n == 2)
        {
            display();
        }
        if(n == 3)
            cout<<"\nWrong choice\n";
        n = menu();
    }while(1);
}
