#include<stdio.h>

int main(){
    int input, sum = 0;
    while (input != -9) {
        scanf("%d", &input);
        sum += input;
  }
  printf("%d", sum+9);
  return 0;
}
