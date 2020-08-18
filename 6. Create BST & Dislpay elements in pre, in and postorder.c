#include<stdio.h>
#include<stdlib.h>

struct nodetype
{
    int info;
    struct nodetype *left;
    struct nodetype *right;
};

    typedef struct nodetype nodeptr;
    nodeptr *root;

void insertnode(int item)
{
    nodeptr *p, *newnode, *back;
    p = root;
    back = NULL;

    newnode = (nodeptr *) malloc(sizeof(nodeptr));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->info = item;

    while (p != NULL)
    {
        back = p;
        if (p->info > item)
            p = p->left;
        else
            p = p->right;
    }

    if (back == NULL)
        root = newnode;
    else if(back->info > item)
        back->left = newnode;
    else
        back->right = newnode;

    return 0;
}

void inorder(nodeptr *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        printf("%d ", p->info);
        inorder(p->right);
    }
}

void preorder(nodeptr *p)
{
    if (p != NULL)
    {
        printf("%d ", p->info);
        preorder(p->left);
        preorder(p->right);
    }
}

void postorder(nodeptr *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d ", p->info);
    }
}

int menu()
{
    int n;
    printf("\n\nMain Menu\n");
    printf("\n1. Insert\n");
    printf("\n2. Display\n");
    printf("\n3. exit\n");
    printf("\nEnter choice (1-3): ");
    scanf("%d", &n);
    printf("\n");

    return n;

}

void display()
{
    if (root)
   {
       printf("\nTraverse tree inorder\n");
       inorder(root);
       printf("\nTraverse tree preorder\n");
       preorder(root);
       printf("\nTraverse tree postorder\n");
       postorder(root);
   }

    else
        printf("\nBST is NULL\n");

}

void main()
{
    nodeptr p;
    int val;
    root = NULL;
    char ch[11];
    int n = 2;

    n = menu();

    do
    {
        if (n==1)
        {
            printf("Insert a val: ");
            scanf("%d", &val);
            insertnode(val);
        }

        if (n==2)
        {
            display();
        }
        if (n==3)
        {
            printf("\n");
            break;
        }
        if (n>3)
            printf("\nwrong choice\n");
        n = menu();
    }
    while (1);
}


