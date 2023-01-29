#include <stdio.h>

int main()
{
    char text[13] = "Hello, world";  
    printf("123456789012345678901234567890\n"); //123456789012345678901234567890
    printf("%s*\n", text);                      //Hello, world*
    printf("%20s*\n", text);                    //        Hello, world* เว้น 20 ช่องว่าง
    printf("%.20s*\n", text);                   //Hello, world* ตัดข้อความให้เหลือ20
    printf("%-20s*\n", text);                   //Hello, world        *
    printf("%.10s*\n", text);                   //Hello, wor*
    printf("%-10s*\n", text);                   //Hello, world*
    printf("%25.10s*\n", text);                 //               Hello, wor*
    printf("%25.5s*\n", text);                  //Hello*
    printf("%-25.10s*\n", text);                //Hello, wor               *
    return 0;
}

/*
output
123456789012345678901234567890
Hello, world*
        Hello, world*
Hello, world*
Hello, world        *
Hello, wor*
Hello, world*
               Hello, wor*
Hello*
Hello, wor               *
*/
