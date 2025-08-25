/*
摂氏温度を入力すると、その華氏温度に変換し、
さらに温度の範囲に応じてメッセージを表示する
プログラムを作成
*/

#include <stdio.h>

int main(void) {
    float celsius = 43.3 ;// 摂氏温度を初期化
    int fahrenheit;

    fahrenheit = (int)(celsius * 9 / 5 + 32); // 華氏温度を計算しint型にキャスト

    printf("摂氏温度: %f°C\n", celsius);
    printf("華氏温度: %d°F\n", fahrenheit);

    if (fahrenheit >= 105) {
        printf("暑い！\n");
    } else if (fahrenheit >= 60 && fahrenheit <= 104) {
        printf("過ごしやすい・・・\n");
    } else {
        printf("寒い！\n");
    }

    return 0;
}