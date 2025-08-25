/*
文字列の配列を使って、ソフトクリームの販売をシミュレーションするプログラムを作成する
*/

#include <stdio.h>

int main(void) {
    char *flavours[3] = {"Vanilla", "Chocolate", "Strawberry"};
    int stock[3] = {3, 3, 3};
    int choice;
    int i, all_sold_out;

    while (1) {
        // 在庫チェック（すべて売り切れなら終了）
        all_sold_out = 1;
        for (i = 0; i < 3; i++) {
            if (stock[i] > 0) {
                all_sold_out = 0;
            }
        }
        if (all_sold_out) {
            printf("すべての味は完売しました!\n");
            break;
        }

        // メニュー表示（1回だけ）
        printf("ソフトクリームいかがですか？\n");
        printf("1.%s 2.%s 3.%s \n", flavours[0], flavours[1], flavours[2]);

        // 入力ループ（メニューは再表示しない）
        while (1) {
            scanf("%d", &choice);

            if (choice < 1 || choice > 3) {
                printf("1か2か3を選択して下さい。\n");
            } else if (stock[choice - 1] == 0) {
                printf("申し訳ありません。売り切れです。他の味はいかがですか。\n");
            } else {
                stock[choice - 1]--;
                printf("%sどうぞ。毎度ありがとうございました。\n", flavours[choice - 1]);
                break; // 正常に購入したらwhile脱出→次の販売へ
            }
        }
    }

    return 0;
}
