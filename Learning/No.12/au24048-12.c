#include <stdio.h>

int main()
{
    int number;
    printf("数字を入力してください: ");
    scanf("%d", &number); 

    int number2 = number * 2;
    printf("2倍にすると %d です。\n", number2);

    return 0;

}