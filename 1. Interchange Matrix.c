#include <stdio.h>

int main(){
    int row, col, i, j;
    int Matrix[50][50], T_Matrix[50][50];
    printf("Enter Rows and Columns of Matrix\n");
    scanf("%d %d", &row, &col);

    printf("Enter Matrix of size %dX%d\n", row, col);

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d", &Matrix[i][j]);
        }
    }

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            T_Matrix[j][i] = Matrix[i][j];
        }
    }

    printf("Transpose Matrix\n");
    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            printf("%d ", T_Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
