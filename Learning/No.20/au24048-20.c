#include<stdio.h>

int getMax(int x, int y);

int main(void) 
{
    int result = getMax(10, 20);
    printf("大きい方は %d です\n", result);
    return 0;
}

int getMax(int x, int y) 
{
    if(x < y)
    {
        return y;
    }
    if(y < x)
    {
        return x;
    }
}