#include<stdio.h>
 
int main() {
    double M[3][3];
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    if( (M[0][0] == M[1][1])  &&  (M[0][0] == M[2][2]) && (M[2][2] == M[1][1]) && (M[1][0] == 0) && (M[2][0] == 0) && (M[0][1] == 0) && (M[2][1] == 0) && (M[0][2] == 0) && (M[1][2] == 0))
    {
        printf("This is a scalar matrix");
    }
    else {
        printf("This is not a scalar matrix");
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     double arr[3][3];
//     int r, c;
//     for (r=0; r < 3; r++){
//         for (c=0; c < 3; c++){
//             scanf("%lf", &arr[r][c]);
//         }
//     }
//     if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
//         if (arr[0][1] == 0 && arr[0][2] == 0 && arr[1][0] == 0 && arr[1][2] == 0 && arr[2][0] == 0 && arr[2][1] == 0){
//             printf("This is a scalar matrix");
//         }
//         else{
//             printf("This is not a scalar matrix");
//         }
//     }
//     else{
//         printf("This is not a scalar matrix");
//     }
//     return 0;
// }
