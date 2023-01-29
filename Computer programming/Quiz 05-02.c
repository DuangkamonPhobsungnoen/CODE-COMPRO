#include <stdio.h>

int main()
{
    int input, sum = 0;
    if ((int) input == input)
    {
        while (input != 0)
        {
            scanf("%d", &input);
            sum += (input * input);
        }
        printf("%d", sum);
    }
    else {
        printf("Error");
    }
    return 0;
}
