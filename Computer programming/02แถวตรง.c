#include <stdio.h>
#include <string.h>

void maxmin(double *a, double *b)
{
    double var;
    var = *a;
    *a = *b;
    *b = var;
}

int main()
{
    int num_stu;
    scanf("%d", &num_stu);
    double hi_stu[num_stu];
    for (int i = 0; i < num_stu; i++)
    {
        scanf("%lf", &hi_stu[i]);
    }
    for (int i = 0; i < num_stu; i++)
    {
        for (int j = i + 1; j < num_stu; j++)
        {
            if (hi_stu[i] < hi_stu[j])
                {
                    maxmin(&hi_stu[i], &hi_stu[j]);
                }
        }
    }
    for (int i = 0; i < num_stu; i++)
    {
        printf("%.2lf\n", hi_stu[i]);
    }
}
