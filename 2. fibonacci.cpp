#include <bits/stdc++.h>
using namespace std;

int fib(int n)      //recursive
{
    int fibo[1000];
    fibo[1]=1;
    fibo[2]=1;

    if(n == 1 || n == 2)
        return fibo[n];

    fibo[n] = fib(n-1) + fib(n-2);

    return fibo[n];
}

int fib2(int n)    //non recursive
{
    int fibo2[1000];
    int i;
    fibo2[0] = 0;
    fibo2[1] = 1;

    for(i = 2; i<=n; i++)
        fibo2[i] = fibo2[i-1] + fibo2[i-2];

    return fibo2[n];
}

int main()
{
    int n;

    cin>>n;
    cout<<"nth term of fibonacci using resursive method: ";
    cout<<fib(n)<<endl<<endl;

    cout<<"nth term of fibonacci using non resursive method:";
    cout<<fib2(n)<<endl;
}
