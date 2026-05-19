#include<stdio.h>

int main()
{
    int a;
    printf("何回入力しますか？: ");
    scanf("%d", &a); 
    
    int i, j;
    int sum = 0;

    for(i = 1; i <= a; i++)
    {
        printf("%d番目: ", i);
        scanf("%d", &j);
        sum += j; 
    }
    
    printf("合計は %dです", sum);

    return 0;
}