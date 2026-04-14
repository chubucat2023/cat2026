#include <stdio.h>

int main() 
{
    int score;        
    score = 25;       // 気温を代入

    if (score >= 30) { 
        printf("真夏日です\n");
    } else {
        printf("快適な気温です\n");
    }

    return 0;
}