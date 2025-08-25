/*
1次元配列を使って、テストの成績を集計するプログラムを作成する
*/
#include <stdio.h>

void printSubject(int index);

int main(void) {
    // 各科目の点数を格納する配列
    int scores[5] = {85, 42, 73, 90, 66};

    // 各種変数の宣言と初期化
    int sum = 0;
    int average = 0;
    int max = scores[0];
    int min = scores[0];
    int max_index = 0;
    int min_index = 0;

    // 各科目の点数出力と最大・最小・合計の計算
    printf("科目別点数:\n");
    for (int i = 0; i < 5; i++) {
        printSubject(i);
        printf(": %d\n", scores[i]);

        // 合計点の加算
        sum += scores[i];

        // 最大点の更新
        if (scores[i] > max) {
            max = scores[i];
            max_index = i;
        }

        // 最小点の更新
        if (scores[i] < min) {
            min = scores[i];
            min_index = i;
        }
    }

    // 平均点の計算
    average = sum / 5;

    // 合計点・平均点・最高点・最低点の出力
    printf("\n");
    printf("合計点: %d点\n", sum);
    printf("平均点: %d点\n", average);
    printf("最高点: ");
    printSubject(max_index);
    printf(" (%d点)\n", max);
    printf("最低点: ");
    printSubject(min_index);
    printf(" (%d点)\n", min);

    return 0;
}

// 科目名を表示する関数（switch文）
void printSubject(int index) {
    switch (index) {
        case 0: printf("国語"); 
        break;
        case 1: printf("数学"); 
        break;
        case 2: printf("英語"); 
        break;
        case 3: printf("理科"); 
        break;
        case 4: printf("社会"); 
        break;
        default: printf("不明"); 
        break;
    }
}
