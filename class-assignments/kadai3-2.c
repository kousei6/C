/*
100メーターダッシュをシミュレーションするプログラム
*/

#include <stdio.h>

int main(void)
{
    int position = 0;  // 現在地を0に初期化

    printf("100メータダッシュをスタートしました!現在地:%dメーター\n", position);

    position++;  // 最初に1進める

    while (position <= 100) {
        if (position < 50) {
            // 50未満なら加速（左シフトで2倍）
            position = position << 1;
            printf("加速！現在地:%dメーター\n", position);
        }
        if (position >= 50) {
            // 50以上なら疲れてきた（5メートル加算）
            position += 5;
            printf("少し疲れた...現在地:%dメーター\n", position);
        }

        if (position > 100) {
            // ゴール条件
            printf("ゴールしました。速かった！\n");
        }
    }

    return 0;
}
