#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[1000];
    int n, i;

    cout<<"n: ";
    cin>>n;

    for(i=1; i<=n; i++)
        cin>>ara[i];

    ara[0] = -1;

    for(int k=2; k<=n; k++)
    {
        int temp = ara[k];
        int ptr;
        ptr = k - 1;
        while(temp < ara[ptr])
        {
            ara[ptr+1] = ara[ptr];
            ptr--;
        }
        ara[ptr+1] = temp;
    }

    cout<<"\nThe sorted array: \n";
    for(i=1; i<=n; i++)
        cout<<ara[i]<<endl;
}
