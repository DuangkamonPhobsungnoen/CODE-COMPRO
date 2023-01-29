#include <stdio.h>
#include <stdlib.h>
int main () {
    int i=-1, num, num1;
    scanf("%d", &num);
    num1 = abs(num);
    if (i<num) {
        do
    {
        i++;
        printf("%d ", num-i);
    } 
    while (i<num);
    }
    else {
        do
    {
        i++;
        printf("%d ", num+i);
    } 
    while (i<num1);
    }
    return 0;
}

#include <stdio.h>
 
// int main()
// {
//     int runner;
 
//     scanf("%d", &runner);
 
//     if (runner >= 0)
//     {
//         while (runner >= 0)
//         {
//             printf("%d ", runner);
//             runner--;
//         }
//     }
//     else
//     {
//         while (runner <= 0)
//         {
//             printf("%d ", runner);
//             runner++;
//         }
//     }
 
//     return 0;
// }
