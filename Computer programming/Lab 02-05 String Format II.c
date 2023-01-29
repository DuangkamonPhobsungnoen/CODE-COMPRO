#include <stdio.h>

int main() 
{
    float f_number = 3.1415;  
    int number1 = 12345;  
    int number2 = -6789;  
    int number3 = 24500;  
    printf("123456789012345678901234567890\n");             //123456789012345678901234567890
    printf("%d %d %d\n", number1, number2, number3);        //12345 -6789 24500
    printf("%3d %3d %3d\n", number1, number2, number3);     //12345 -6789 24500
    printf("%8d %8d %8d\n", number1, number2, number3);     //   12345    -6789    24500
    printf("%08d %08d %08d\n", number1, number2, number3);  //00012345 -0006789 00024500
    printf("%-8d %-8d %-8d\n", number1, number2, number3);  //12345    -6789    24500  
    printf("%10f\n", f_number);     //3.141500
    printf("%3f\n", f_number);      //3.141500
    printf("%-10f\n", f_number);    //3.141500
    printf("%-10.3f\n", f_number);  //3.141 
    printf("%10.2f\n", f_number);   //      3.14
    printf("%.1f\n", f_number);     //3.1
    printf("%.3f\n", f_number);     //3.141
    return 0;
}
/*  """%d การแทนที่ตัวแปรนั้นเป็นจำนวนเต็ม"""

    %3d เป็นการกำหนดพื้นที่ช่องว่าง เช่น 12345 กำหนด %3d ตอนprintf จะไม่มีช่องว่าง

    %8d ถ้า 12345 กำหนด %8d ตอนprintf จะมีช่องว่าง 3 ช่อง (เลขจะชิดขวา) เพราะ 12345 มีจำนวน 5 ตัว 

    %08d ถ้า 12345 กำหนด %08d ตอนprintf จะมีช่องว่าง 3 ช่อง เพราะ 12345 มีจำนวน 5 ตัว 
        และ ช่องว่าง 3 ช่องจะถูกแทนที่ด้วยเลข 0 ตามที่กำหนดเงื่อนไข

    %-8d ถ้า 12345 กำหนด %-8d ตอนprintf จะมีช่องว่าง 3 ช่อง (เลขจะชิดซ้าย) เพราะ 12345 มีจำนวน 5 ตัว 

    """%f การแทนที่ตัวแปรเป็นทศนิยม"""
    การใช้งานคล้ายๆ %d 
    เพิ่ม %10.2f หมายความว่า เลขชิดขวา เอาทศนิยม 2 ตน
    %-10.2f หมายความว่า เลขชิดซ้าย เอาทศนิยม 2 ตน
    %.1f หมายความว่า เอาทศนิยม 1 ตน
*/
