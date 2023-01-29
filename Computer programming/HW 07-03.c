#include <stdio.h>

int stairs(int num){
    if(num == 1 || num == 2){
        return num;
    }
    return stairs(num-1) + stairs(num-2);
}

int main(){
    int num_stairs;
    scanf("%d", &num_stairs);
    printf("method = %d", stairs(num_stairs));
}

#include <stdio.h>
 
// int stairs(int num)
// {   
//     int one=1, two=1, sum=1;
//     for (int i=2; i <= num; i++){
//         sum = one+two;
//         two = one;
//         one = sum;
//     }
//     return sum;
// }

// int main(){
//     int num_stairs;
//     scanf("%d", &num_stairs);
//     printf("method = %d", stairs(num_stairs));
// }
