#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[1000];
    cout<<"n: ";
    int n;
    cin>>n;

    for(int k=1; k<=n; k++)
        cin>>ara[k];

    for(int k=1; k<=n; k++)
    {
        int min, loc;
        min = ara[k];
        loc = k;
        for(int j=k+1; j<=n; j++)
        {
            if(min > ara[j])
            {
                min = ara[j];
                loc = j;
            }
        }
        int temp;
        temp = ara[k];
        ara[k] = ara[loc];
        ara[loc] = temp;
    }
    cout<<"\nThe sorted array: \n";
    for(int k=1; k<=n; k++)
        cout<<ara[k]<<endl;

    return 0;
}
