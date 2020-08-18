#include <iostream>
using namespace std;

int main()
{
    int a[100], b[100], c[100];
    int r, s;

    cout<<"Enter the no. of elements in 1st ara: ";
    cin>>r;
    cout<<"Enter the elements: \n";
    for(int i=1; i<=r; i++)
        cin>>a[i];

    cout<<"Enter the no. of elements in 2nd ara: ";
    cin>>s;

    cout<<"Enter the elements: \n";
    for(int i=1; i<=s; i++)
        cin>>b[i];

    int na=1, nb=1, ptr=1;

    while(na <= r && nb <= s)
    {
        if(a[na] < b[nb])
        {
            c[ptr] = a[na];
            ptr++;
            na++;
        }
        else
        {
            c[ptr] = b[nb];
            ptr++;
            nb++;
        }
    }
    if(na > r)
    {
        for(int k=0; k<=s-nb; k++)
        {
            c[ptr+k] = b[nb+k];
        }
    }
    else
    {
        for(int k=0; k<=r-na; k++)
        {
            c[ptr+k] = a[na+k];
        }
    }

    cout<<"The sorted array: \n";
    for(int i=1; i<(na+nb); i++)
        cout<<c[i]<<endl;

    return 0;
}

