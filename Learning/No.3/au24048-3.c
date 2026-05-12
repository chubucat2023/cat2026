#include<stdio.h>

int add(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int main() {
    int final_result = add(100, 200);
    printf("Result: %d\n", final_result);
    return 0;
}




