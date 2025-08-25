/*
首都クイズを実施するプログラムを作成する
*/
#include <stdio.h>
#include <string.h>

int checkAnswer(int index);

int main(void) {
    // 国名を格納した2次元文字列配列
    char countries[10][20] = {
        "China", "South Korea", "Holland", "Germany", "Peru",
        "Ecuador", "Australia", "New Zealand", "Egypt", "Nigeria"
    };
    int i;
    int score = 0;

    // 10か国分のクイズを出題するループ
    for (i = 0; i < 10; i++) {
        printf("%sの首都は？", countries[i]);
        score += checkAnswer(i);
    }

    printf("正解数：%d\n", score);

    return 0;
}

int checkAnswer(int index) {
    char capitals[10][20] = {
        "Beijing", "Seoul", "Amsterdam", "Berlin", "Lima",
        "Quito", "Canberra", "Wellington", "Cairo", "Abuja"
    };
    char answer[20];

    scanf("%s", answer);

    if (strcmp(answer, capitals[index]) == 0) {
        printf("正解！\n");
        return 1;
    } else {
        printf("不正解！正解は%sです。\n", capitals[index]);
        return 0;
    }
}
