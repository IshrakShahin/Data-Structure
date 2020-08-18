#include<bits/stdc++.h>
#define MAX 20

int matrix[MAX][MAX]; /// Graph
int n; /// Number of Nodes

int main()
{
    int max_edge,origin,destin,type;

    printf("Enter the Number of Nodes : ");
    scanf("%d", &n);

    printf("Enter the Graph Type Directed or Undirected (1/0): ");
    scanf("%d", &type);

    if(type==1)
        max_edge = n*(n-1)/2;
    else
        max_edge = n*(n-1); /// Max Edge

    for(int i=0;i<max_edge;i++)
    {
        printf("Enter Edge %d( 0 0 to QUIT ) : "); /// Input
        scanf("%d%d",&origin,&destin);

        if(origin==0 && destin==0) /// Exit Condition
            break;

        else if(origin>=max_edge||destin>=max_edge||origin<0||destin<0) /// Invalid Case
        {
            printf("Invalid Choice\n");
            i--;
            continue;
        }

        matrix[origin][destin]=1; /// Valid Case

        if(type==0) /// Undirected Graph

            matrix[destin][origin]=1;
    }

    printf("The Adjacency MATRIX is:\n\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ", &matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
