#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char text[300];
    int number[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%[^\n]", text);
    for (int i=0; i<strlen(text); i++){
        if (isalnum(text[i])){
            switch (text[i])
            {
            case '0':
                number[0] += 1;
                break;
            case '1':
                number[1] += 1;
                break;
            case '2':
                number[2] += 1;
                break;
            case '3':
                number[3] += 1;
                break;
            case '4':
                number[4] += 1;
                break;
            case '5':
                number[5] += 1;
                break;
            case '6':
                number[6] += 1;
                break;
            case '7':
                number[7] += 1;
                break;
            case '8':
                number[8] += 1;
                break;
            case '9':
                number[9] += 1;
                break;
            }
        }
    }
    for (int j=0; j<10; j++){
        printf("%d ", number[j]);
    }
}
