/*
利子月の貯金額をシュミレーションするプログラムを作成せよ
*/

#include <stdio.h>

int main() {
    double total = 0.0; // 初期化
    int i;

    printf("貯金スタート！\n");
    for (i = 1; i <= 12; i++) {
        total += 10000; // 毎月1万円を貯金
        total *= 1.01; // 1%の利子を加える
        printf("%dヶ月目: %f円\n", i, total);
    }
    printf("最終金額: %f円\n", total);

    return 0;
}