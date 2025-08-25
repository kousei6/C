/*
2人対戦のホットドック大食い大会をシュミレー
ションするプログラムを作成する
 */

# include <stdio.h>

int main(void){
    int user_1_total = 0; // ユーザー1の合計ホットドッグ数
    int user_2_total = 0; // ユーザー2の合計ホットドッグ数
    int user_1_per_min = 8; // ユーザー1の1分あたりのホットドッグ数
    int user_2_per_min = 7; // ユーザー2の1分あたりのホットドッグ数
    int min=1;

    printf("ホットドッグ大食い大会　開始！\n");
    printf("\n");
    do {
        // ペースダウン判定
        if (min >= 7) {
            user_1_per_min = 5; // 8-3
        }
        if (min >= 8) {
            user_2_per_min = 6; // 7-1
        }

        user_1_total += user_1_per_min;
        user_2_total += user_2_per_min;

        printf("%d分経過：1人目 = %d個, 2人目 = %d個\n", min, user_1_total, user_2_total);

        min++;
    } while (min <= 10);

    printf("\n");
    printf("=== 結果発表 ===\n");
    if (user_1_total > user_2_total) {
        printf("1人目の勝ち！ホットドッグ %d個！\n", user_1_total);
    } else if (user_1_total < user_2_total) {
        printf("2人目の勝ち！ホットドッグ %d個！\n", user_2_total);
    } else {
        printf("引き分け！ホットドッグ %d個！\n", user_1_total);
    }

    return 0;
}