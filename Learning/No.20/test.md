2つの整数を引数として受け取り、その「大きい方の値」を返す関数 getMax を作成し、main 関数から呼び出して結果を表示してください。

雛形コード
```
#include <stdio.h>

// 関数のプロトタイプ宣言
int getMax(int x, int y);

int main(void) {
    int result = getMax(10, 20);
    printf("大きい方は %d です\n", result);
    return 0;
}

int getMax(int x, int y) {
    /* ここに処理を記述 */
}
```