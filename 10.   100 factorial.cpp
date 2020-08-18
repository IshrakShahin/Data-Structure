#include <iostream>
#define max 5000
int result[max];
int result_size;
using namespace std;

void multiply(int x)
{
    int carry = 0;
    for(int i=0; i<result_size; i++)
    {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod;
    }
    while(carry)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }
}
void factorial(int n)
{
    result[0] = 1;
    result_size = 1;

    for(int x=2; x<=n; x++)
        multiply(x);

    for(int i=result_size-1; i>=0; i--)
        cout<<result[i];
    cout<<endl;
}
int main()
{
    int n;
    factorial(100);
}
