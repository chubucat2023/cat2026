#include <stdio.h>

int main() 
{
    int score;        
    score = 50;       // 気温を代入

    if (score >= 80) { 
        printf("優秀\n");
    } else if(80 > score >= 60) {
        printf("合格\n");
    } else{
        printf("不合格\n");
    }

    return 0;
}