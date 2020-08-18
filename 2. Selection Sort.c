#include<stdio.h>

int main()
{
    int arr[100], n, i, j, k;
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(k=1;k<=n-1;k++)
    {
        int temp, loc, min, j;
        min = arr[k];
        loc = k;

        for(j=k+1;j<=n;j++)
        {
            if (min>arr[j])
            {
                min = arr[j];
                loc = j;
            }
        }

        temp = arr[k];
        arr[k] = arr[loc];
        arr[loc] = temp;
    }

    for(i=1;i<=n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
