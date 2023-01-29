#include <stdio.h>

// func เก็บค่า
double getValue()
{
    double value;
    scanf("%lf", &value);
    return value;
}

// func หาค่าน้อยสุด
double findMin(double array[], int value)
{
    double sum = array[0];
    for (int i = 0; i < value; i++)
    {
        if (sum > array[i])
        {
            sum = array[i];
        }
    }
    return sum;
}

// func หาค่ามากสุด
double findMax(double array[], int value)
{
    double sum = array[0];
    for (int i = 0; i < value; i++)
    {
        if (sum < array[i])
        {
            sum = array[i];
        }
    }
    return sum;
}

// func หาค่าเฉลี่ย
double findAvg(double array[], int value)
{
    double sum = 0;
    for (int i = 0; i < value; i++)
    {
        sum += array[i];
    }
    return sum / value;
}

int main()
{
    int number;
    scanf("%d", &number);
    double array[100];
    // double array[number];
    for (int i = 0; i < number; i++)
    {
        array[i] = getValue();
    }

    printf("%d Values\n", number);
    printf("Min: %.3f\n", findMin(array, number));
    printf("Max: %.3f\n", findMax(array, number));
    printf("Avg: %.3f", findAvg(array, number));
}
