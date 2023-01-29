#include<stdio.h>
#include<math.h>
 
int main()
{   
    double input1, input2, input3;
    double max, min, sum;
    scanf("%lf %lf %lf", &input1, &input2, &input3);
    max = fmax(fmax(input1, input2), input3);
    min = fmin(fmin(input1, input2), input3);
    sum = input1 + input2 + input3;
    printf("%.2lf", sum - (max + min));
    return 0;
}


// #include<stdio.h>
// #include<math.h>
 
// int main()
// {   
//     double input;
//     int i;
//     double max, min, sum;
     
//     for(i = 0; i < 3; i++)
//     {
//         scanf("%lf", &input);
//         sum = sum + input;
//         if(i==0 || input > max)
//         {
//             max = input;
//         }
//         else {
//             min = input;
//         }
//     }
     
//     printf("%.2lf", sum - (max+min));
//     return 0;
// }
