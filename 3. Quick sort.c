#include<stdio.h>

int main()
{
    int l=1, r= n, loc=1;

   step:
    while ((a[loc] <= a[r]) && loc != r) {
        r--;
    }
    if (loc == r)
        return;
    if (a[loc] > a[r])
    {
        temp = a[loc];
        a[loc] = a[r];
        a[r] = temp;

        loc = r;

        while ((a[l] <= a[loc]) && l != loc) {
        l++;
    }
    if (loc == l)
        return;
    if (a[l] > a[loc])
    {
        temp = a[loc];
        a[loc] = a[l];
        a[l] = temp;

        loc = l;
        goto step;
    }


    return 0;
}
