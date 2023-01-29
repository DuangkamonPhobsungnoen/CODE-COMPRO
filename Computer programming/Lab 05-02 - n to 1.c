#include <stdio.h>
int main () {
    int i=0, num;
    scanf("%d", &num);
    do
    {
        i++;
        printf("%d ", num-i+1);
    } 
    while (i<num);
    return 0;
}

// #include <stdio.h>
 
// int main()
// {   int n;
//     scanf("%d", &n);
//     do {
//         printf("%d ", n);
//         n--;
//     } while (n>=1);
//     return 0;
     
// }

// int main()
// {
//     int start = 1, runner;
 
//     scanf("%d", &runner);
 
//     do
//     {
//         printf("%d ", runner);
//         runner--;
//     } while (runner >= start);
 
//     return 0;
// }
