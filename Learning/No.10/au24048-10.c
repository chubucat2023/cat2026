#include<stdio.h>

int main()
{
    int result;

    for(int i = 10; i >= 0; i--){
    printf("%d\n", i);    
    if(i == 0){
       printf("Blast off!"); 
    }
    }

    return 0;
}