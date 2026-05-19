#include <stdio.h>

int main()
{
    int number ;
    printf("西暦を入力: ");
    scanf("%d", &number); 
    if(number <= 1925 || number >=1990)
    {
      printf("1926年から1989年の間で入力してください。");
    }
    else
    {
      int number2 = number - 1925;
      printf("昭和 %d 年です。\n", number2);
    }

    return 0;

}