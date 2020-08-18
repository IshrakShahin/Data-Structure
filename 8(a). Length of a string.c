#include <stdio.h>

int main()
{
    char str[50];
    int i, len;

    printf("Enter string: ");
    gets(str);

    for(i=0 ; str[i] != '\0' ; i++);
    len = i;

    printf("\nLength of string: %d", len);

    return 0;
}
