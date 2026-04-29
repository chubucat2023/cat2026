#include <stdio.h>

int main()
{
    int a = 10, b = 25, c = 15;
    int max;
    
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    
    printf("最大値は: %d\n", max);
    
    return 0;
}