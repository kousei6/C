/*
1週間の間にサボテンを育成するプログラムを作成する。
*/
#include <stdio.h>

int main(void) {
    // 変数を定義
    int height = 5; // サボテンの初期高さ
    int day = 1;    // 日数を1で初期化

    printf("育成スタート!\n");

    // 7日間の育成ループ
    while (day <= 7) {
        if (day % 2 == 0 || day % 3 == 0) { // 偶数日または3の倍数の日
            height += 3; // サボテンが3cm成長
            printf("%d日目は成長しました(現在の高さ:%dcm)\n", day, height);
        }
        day+=1; // 日数を1日進める
    }

    printf("育成終了!最終的な高さは%dcmです。\n", height);

    return 0;
}

