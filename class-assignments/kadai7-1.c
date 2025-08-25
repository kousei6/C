/*
0から9の部屋に隠れている猫のタマを探すプログラムを作成する
*/

#include <stdio.h>

int main() {
    int tama_location = 6; // タマの場所を0～9で設定

    printf("タマを探しています...\n");
    for (int i = 0; i <= 9; i++) {
        if (i == 3) {
            printf("※ 3番は立入禁止区域のためスキップ\n");
            continue;
        }
        printf("%d番の場所を探索中...\n", i);
        if (i == tama_location) {
            printf("タマを発見!%d番の場所にいました!\n", i);
            break;
        }
    }
    printf("探索終了!\n");
    return 0;
}