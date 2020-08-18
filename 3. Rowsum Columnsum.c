#include <stdio.h>

int main()
{
    int i, j, m, n;
    int matrix[10][20];
    int sum=0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < m; i++)
    {
        sum = 0;
        for (j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            sum += matrix[j][i];
        }
        printf("Sum of column %d = %d\n", i + 1, sum);
    }

    return 0;
}
