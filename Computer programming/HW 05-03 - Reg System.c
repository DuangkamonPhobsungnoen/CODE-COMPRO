#include <stdio.h>
int main () {
    int a=0, b=0, c=0, d=0, i=1;
    float age1=0, height1=0, weight1=0, age, height, weight;
    while (i <= 50)
    {   
        i++;
        scanf("%f %f %f", &age, &height, &weight);
        age1 = age1 + age;
        height1 = height1 + height;
        weight1 = weight1 + weight;
        if (age >= 20 && height >= 160) {
            a++;
        }
        if (age < 20 && (height <= 180 || weight >= 60)) {
            b++;
        }
        if (age >= 30 && 40 <= weight && weight <= 80) {
            c++;
        }
        if (age < 40 && (height <= 200 || weight < 85)) {
            d++;
        }
    }
    printf("Age >= 20 and Height >= 160: %d\n", a);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", b);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", c);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", d);
    printf("Average Age: %.0f\n", age1/50);
    printf("Average Height: %.2f\n", height1/50);
    printf("Average Weight: %.2f\n", weight1/50);
    return 0;
    
}
