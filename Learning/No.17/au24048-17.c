#include<stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf,%lf,%lf", &a, &b, &c);

    double sum, ave;
    
            sum = (a + b + c);
            ave = sum/3;

    printf("合計: %lf\n平均: %lf", sum, ave);

    return 0;
}