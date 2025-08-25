/*
プロタイプ宣言と関数を使って、一週間の食事の予算を管理するプログラムを作成する
*/

#include <stdio.h>

// プロトタイプ宣言
int input_meal_price(int day, int meal_num);

int main() {
    int budget = 10000;  // 初期予算
    int price;
    int day, meal;

    printf("一週間の食事の予算は10000円です。\n");

    for (day = 1; day <= 7; day++) {
        for (meal = 1; meal <= 3; meal++) {
            price = input_meal_price(day, meal);
            budget -= price;
            printf("残りの予算は%d円です。\n", budget);

            if (budget <= 0) {
                return 0;  // 予算が無くなったら終了
            }
        }
    }

    return 0;
}

// 食事の値段を入力する関数
int input_meal_price(int day, int meal_num) {
    int price;
    char *meal_name;

    // 食事の名前を決定
    if (meal_num == 1) {
        meal_name = "朝食";
    } else if (meal_num == 2) {
        meal_name = "昼食";
    } else {
        meal_name = "夕食";
    }

    while (1) {
        printf("%d日目、%s。この食事の値段を入力して下さい：", day, meal_name);
        scanf("%d", &price);

        if (price > 0) {
            return price;
        } else {
            printf("0より大きい数字を入力して下さい。\n");
        }
    }
}
