#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i,j,k, x;
    i=i1;
    j=i2;
    k=0;

    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }

    while(i<=j1)
        temp[k++]=a[i++];

    while(j<=j2)
        temp[k++]=a[j++];

    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}


void mergesort(int a[],int i,int j)
{
    int mid;

    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j) ;
        merge(a,i,mid,mid+1,j);
    }
}

int main()
{
    int a[100];
    int n, i;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter the elements: "<<endl;

    for(i=0; i<n; i++)
        cin>>a[i];

    mergesort(a, 0, n-1);

    cout<<"Sorted array: "<<endl;
    for(i=0; i<n; i++)
        cout<<a[i]<<endl;
}
