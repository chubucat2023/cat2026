#include <stdio.h>

int main(){
    int score;
    score = 72;
    if(score >= 80){
        printf("優秀\n");
    }
    else if(score >= 60){
        printf("合格\n");
    }
    else if(score < 60){
        printf("不合格\n");
    }
}