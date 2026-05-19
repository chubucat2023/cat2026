#include<stdio.h>

int main()
{
    int i;
    for(i = 1; i <= 9; i++)
    {
        int j;
        for(j = 1; j <= 9; j++)
        {
            int result;
            result = j*i;
            printf("%2d ", result);
        }
        printf("\n");
    }
    return 0;
}