#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char string[MAX_SIZE], word[MAX_SIZE];
    int i, index, found = 0;

    printf("Enter any string: ");
    gets(string);
    printf("Enter word to be searched: ");
    gets(word);

    index = 0;
    while(string[index] != '\0')
    {

        if(string[index] == word[0])
        {
            i=0;
            found = 1;
            while(word[i] != '\0')
            {
                if(string[index+i] != word[i])
                {
                    found = 0;
                    break;
                }

                i++;
            }
        }

        if(found == 1)
        {
            break;
        }

        index++;
    }


    if(found == 1)
        printf("'%s' is found at index %d.\n", word, index);
    else
        printf("'%s' is not found.\n", word);

    return 0;
}
