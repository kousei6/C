/*
「好きなアーティストは誰か?」を投票してもらうプログラムを作成する
*/
#include <stdio.h>

int main(void) {
    // アーティスト名を2次元文字列配列で定義（最大25文字、4名分）
    char artists[4][25] = {
        "Mrs. GREEN APPLE",
        "YOASOBI",
        "Aimer",
        "無効票"
    };

    // 投票数を記録する配列（初期値はすべて0）
    int votes[4] = {0, 0, 0, 0};

    int i, choice;

    // 投票を10回繰り返す
    for (i = 0; i < 10; i++) {
        // アーティスト一覧を表示（無効票は表示しない）
        printf("好きなアーティストを選んでください：\n");
        for (int j = 0; j < 3; j++) {
            printf("%d: %s\n", j, artists[j]);
        }

        printf("番号を入力してください：");
        scanf("%d", &choice);

        // 投票結果を処理
        if (choice >= 0 && choice <= 2) {
            votes[choice]++;
        } else {
            printf("無効な番号です（無効票として記録します）\n");
            votes[3]++;
        }
    }

    // 最終的な投票結果を表示
    printf("【投票結果】\n");
    for (i = 0; i < 4; i++) {
        printf("%s : %d 票\n", artists[i], votes[i]);
    }

    return 0;
}
