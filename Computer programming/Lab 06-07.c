#include <stdio.h>
#include <string.h>

int main()
{
    char text[200];
    scanf("%[^\n]", text);
    char value[] = {'A', 'B', 'X', 'Y', 'P', 'Q', 'R', 'M', 'N', 'C', 'E', 'D', 'K', 'L',
                    'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z',
                    'G', 'W', 'I', 'A', 'B', 'X', 'Y', 'P', '\0'};
    char value1[] = {'a', 'b', 'x', 'y', 'p', 'q', 'r', 'm', 'n', 'c', 'e', 'd', 'k', 'l',
                     'j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z',
                     'g', 'w', 'i', 'a', 'b', 'x', 'y', 'p', '\0'};
    int len_value = 0;
    int len_text = 0;
    for (len_value; value[len_value] != '\0'; len_value++)
        ;
    for (len_text; text[len_text] != '\0'; len_text++)
        ;

    for (int i = 0; i < len_text; i++)
    {
        for (int j = 5; j < len_value; j++)
        {
            (text[i] == value[j]) ? printf("%c", value[j - 5]) : (0);

            (text[i] == value1[j]) ? printf("%c", value1[j - 5]) : (0);
            
            if (text[i] == ' ')
            {
                printf(" ");
                break;
            }
        }
    }
    return 0;
}
