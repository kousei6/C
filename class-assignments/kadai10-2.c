/*
static変数を使って、ラーメン屋をシミュレーションするプログラムを作成する。
*/

#include <stdio.h>

// プロトタイプ宣言
int ramenShop(void);

int main(void) {
    // ramenShopの戻り値が0になるまで呼び出す
    while (ramenShop());
    return 0;
}

// ラーメン屋の関数
int ramenShop(void) {
    // static変数の宣言と初期化
    static int waiting = 5;  // 順番待ち
    static int served = 0;   // 食べ終わった客数

    // 現在の順番待ち人数を表示
    printf("順番待ち：%d名\n", waiting);

    // いらっしゃいませ
    printf("いらっしゃいませ！\n");

    // 5回ラーメンを食べる音
    for (int i = 0; i < 5; i++) {
        printf("ズルズル ");
    }
    printf("\n");

    // お客様お帰り
    printf("お客様お帰りです！\n");

    // 客を減らして、食べた人数を増やす
    waiting--;
    served++;

    // 2人食べたら1人来店
    if (served % 2 == 0) {
        printf("新しいお客様がやってきました！\n");
        waiting++;
    }

    // 待ち人数が0になったら終了（0を返す）
    if (waiting == 0) {
        return 0;
    } else {
        return 1;
    }
}
