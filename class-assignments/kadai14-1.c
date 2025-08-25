/*
偶数番目の箱に入っているリンゴの数を数えるプログラムを作成する
*/
#include <stdio.h>

int main(void) {
    int apples[10];            // 各箱に入っているリンゴの数
    int evenBoxes[5];          // 偶数番号の箱に入っているリンゴの数
    int i;
    int evenIndex = 0;         // evenBoxesの添え字
    int sum = 0;               // 合計値
    int max = 0;               // 最大値

    // 各箱に入っているリンゴの数を入力
    for (i = 0; i < 10; i++) {
        printf("%d番の箱に入っているリンゴの数を入力してください: ", i);
        scanf("%d", &apples[i]);
    }

    // 偶数番号の箱に入っているリンゴをevenBoxesに格納
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            evenBoxes[evenIndex] = apples[i];
            evenIndex++;
        }
    }

    // 合計と最大値を計算
    for (i = 0; i < 5; i++) {
        sum += evenBoxes[i];
        if (evenBoxes[i] > max) {
            max = evenBoxes[i];
        }
    }

    // 結果を出力
    printf("偶数番号の箱に入っているリンゴの合計: %d個\n", sum);
    printf("偶数番号の箱に入っているリンゴの中で最も多い数: %d個\n", max);

    return 0;
}
