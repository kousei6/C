/*
関数を使って、猫の年齢を人間の年齢に換算するプログラムを作成する
*/
#include <stdio.h>

// 関数の定義
int CatToHumanAge(int age) {
    switch(age) {
        case 0:
            return 0;
        case 1:
            return 15;
        case 2:
            return 24;
        default:
            return 24 + (age - 2) * 4;
    }
}

int main() {
    int catAge = 1;  // 任意の年齢に変更可能
    int humanAge = CatToHumanAge(catAge);

    printf("猫の年齢 %d 歳は、人間の年齢に換算すると %d 歳です。\n", catAge, humanAge);

    return 0;
}
