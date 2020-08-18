#include<stdio.h>
#include<stdlib.h>

int compare(const int*, const int*);

int main()
{
    int size;
    printf("How many Elements ?: ");
    scanf("%d", &size);

    int ara[size];

    printf("Enter %d elements\n\n",size);

    for(int i=0;i<size;i++)
    {
        scanf("%d",&ara[i]);
    }

    qsort(ara,size,sizeof(int),(int (*)(const void*, const void*))compare);


    printf("Sorted List:\n\n");
    for(int i=0;i<size;i++)
        printf("%d  ", ara[i]);

    printf("\n");
    return 0;

}
int compare (const int *a, const int *b)
{
    return (*a-*b);
}
