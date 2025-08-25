/*
キーボードからの文字列入力と、文字列を扱うライブラリ関数を使用して、
最も名前が長い果物を見つけるプログラムを作成する。
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    // 果物の名前を格納する文字列の2次元配列
    char fruits[5][100];
    // 最も長い果物の名前をコピーして保存する文字配列
    char longest[100];
    // キーボードからの入力を一時的に保存する文字配列
    char input[100];
    // 最長の文字列の長さを記録する整数
    int maxLength;
    // forループで使用するカウンタ変数
    int i;

    maxLength = 0;
    // 最初の入力で longest に値が入るように、空の文字列で初期化しておく
    longest[0] = '\0';

    printf("5つのフルーツを入力してください（各最大100文字）：\n");

    // for 文を使って、5つの果物の名前をキーボードから入力する
    for (i = 0; i < 5; i++) {
        printf("フルーツ%d: ", i + 1);
        // 文字列を入力（注：99文字までを想定）
        scanf("%s", input);

        // 入力された文字列の長さをチェック
        if (strlen(input) >= 100) {
            // 入力が長すぎる場合はエラーメッセージを表示する
            printf("入力が長すぎます。100文字未満にしてください。\n");
        } else {
            // 入力された文字列をfruitsの配列にコピーする
            strcpy(fruits[i], input);

            // 現在の文字列が最長かチェック
            if (strlen(fruits[i]) > maxLength) {
                // 最長記録を更新する
                maxLength = strlen(fruits[i]);
                // 最長の文字列をlongestにコピーする
                strcpy(longest, fruits[i]);
            }
        }
    }

    // 最後に、longest に格納された文字列とその長さを表示する
    printf("\n");
    printf("\n");
    printf("最長のフルーツ : %s\n", longest);
    printf("長さ: %d\n", maxLength);

    return 0;
}