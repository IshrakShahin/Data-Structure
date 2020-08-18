#include<stdio.h>

int main()
{
    int a[100], b[100], c[100], r, s, k, i;
    scanf("%d", &r);

    for(i=1;i<=r;i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &s);

    for(i=1;i<=s;i++)
    {
        scanf("%d", &b[i]);
    }

    int na=1, nb=1, ptr=1;

    while(na<=r && nb<=s)
    {
        if (a[na]<b[nb])
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

    if (na>r)
    {
        for(k=0;k<=s-nb;k++)
        c[ptr+k] = b[nb+k];
    }
    else
    {
        for(k=0;k<=r-na;k++)
        c[ptr+k] = a[na+k];
    }

    for(i=1;i<=r+s;i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
