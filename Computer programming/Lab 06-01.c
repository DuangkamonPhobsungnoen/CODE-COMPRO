#include <stdio.h>
int main () {
    int num, check=0;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    do
    {
        scanf("%d", &num);
    }
    while (num<1 || num>20);
    int i;
        for (i = 0; i <= 8 ; i++) //เช็คทีล่ะ index ว่าอยู่ที่เท่าไหร่
        {
            if(M[i] == num)
            {
            check=1;
            printf("%d is in M at index [%d]", num, i);
            break;
            }
        }
        if(check == 0)
        {
        for (i = 0; i <= 7 ; i++) //เช็คทีล่ะ index ว่าอยู่ที่เท่าไหร่
        {
            if(N[i] == num)
            {
            check=1;
            printf("%d is in N at index [%d]", num, i);
            break;
            }
        }
        }
    if(check == 0)
    {
    printf("%d is not in neither M nor N", num);
    }
    return 0;
}
