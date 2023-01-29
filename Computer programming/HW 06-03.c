#include<stdio.h>
#include <string.h>
 
int main() {
    char text[100];
    scanf("%s", text);
    int i, check=0;
    for (i = 0; i < strlen(text) ; i++)
    {

        if(text[i] == text[strlen(text)-i-1]) //ไล่จากหน้าไปหลัง ไล่จากหลังไปหน้า
        {
            check=1; //break ไม่ได้
        }
        else{
            check=0;
            break;
        }
    }
    if(check == 1)
        {
            printf("It is Palindrome.");
        }
    if(check == 0)
        {
            printf("It is not Palindrome.");
        }
    return 0;
}
