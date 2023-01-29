#include <stdio.h>
#include <ctype.h>

int main()
{
    char srt_input[300], str_count;
    scanf("%[^\n] %c", &srt_input, &str_count);
    int check_count = 0, index[300]; 
    for (int i = 0; srt_input[i] != '\0'; i++) //for รับตัวอักษร
    {
        if (tolower(srt_input[i]) == str_count)
        {
            index[check_count] = i;
            check_count++;
        }
    }

    if (check_count > 0)
    {
        printf("There is/are %d \"%c\" in the above sentences.\n", check_count, str_count);
        printf("Position: %d", index[0] + 1);
        for (int i = 1; i < check_count; i++) //for ตำแหน่งที่เหลือ
        {
            printf(", %d", index[i] + 1);
        }
    }
    else
    {
        printf("Not found.");
    }
    return 0;
}
