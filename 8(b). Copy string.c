#include<stdio.h>

int main()
{
    int i, j;
    char s1[100], s2[100];
    printf("Enter a string : \n");
    scanf("%[^\n]%*c", s1);

    for(i=0; s1[i] != '\0'; i++)
        s2[i] = s1[i];
    s2[i] = 0;

    printf("\nthe original string is: %s\n", s1);
    printf("\nthe string after copying is: %s\n", s2);

    return 0;
}
