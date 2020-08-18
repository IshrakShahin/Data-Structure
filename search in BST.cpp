#include <bits/stdc++.h>
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
    newnode->right = NULL;
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
        cout<<p->info<<" ";
        preorder(p->left);
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
void display(node *root)
{
        cout<<"\nTraverse Tree Inorder\n";
        inorder(root);
        cout<<"\nTraverse Tree Preorder\n";
        preorder(root);
        cout<<"\nTraverse Tree Postorder\n";
        postorder(root);
        cout<<endl<<endl;
}

void searchNode(int item, node *p)
{
    if(p == NULL)
        cout<<"Value not found\n";
    else if(p->info == item)
        cout<<"Value found\n";
    else if(p->info > item)
        searchNode(item, p->left);
    else
        searchNode(item, p->right);
}

int main()
{
    node *p;
    int val;
    root = NULL;

    cout<<"\n\tMAIN MENU\n";
    cout<<"1. Insert\n";
    cout<<"2. Display\n";
    cout<<"3. Search\n";
    cout<<"4. Exit\n";

    int n;
    while(1)
    {
        cout<<"Enter you choice: ";
        cin>>n;
        switch(n)
        {
        case 1:
            cout<<"Insert: ";
            cin>>val;
            insertnode(val);
            break;
        case 2:
            display(root);
            break;
        case 3:
            int item;
            cout<<"Enter item to search: ";
            cin>>item;
            searchNode(item, root);
            break;
        default:
            cout<<"Wrong Choice\n";
            break;
        }
    }
    return 0;
}

