#include<stdio.h>

int main()
{
    int total;

    total = 0;
    for (int i = 1; i <= 10; i++)
        total += i;
        
    printf("%d\n", total);   

    return 0;
}