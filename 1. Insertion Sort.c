#include<stdio.h>

int main()
{
    int arr[100], n, i;
    scanf("%d", &n);
    arr[0] = -1;

    for(i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int k, temp, ptr;
    for(k=2;k<=n;k++)
    {
        temp = arr[k];
        ptr = k-1;

        while (temp<arr[ptr])
        {
            arr[ptr+1] = arr[ptr];
            ptr--;
        }
        arr[ptr+1] = temp;
    }

    for(i=0;i<=n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
