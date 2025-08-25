/*
関数を使って高速道路の速度超過違反の判定とその罰を表示するプログラムを作成する
*/

#include <stdio.h>

// 速度超過を判定する関数
int CheckSpeedOver(int overSpeed) {
    if (overSpeed <= 0) {
        return 0;  // 違反なし
    } else if (overSpeed >= 40) {
        return -1; // 重度違反（懲役・高額罰金）
    } else if (overSpeed >= 35) {
        return 35000;
    } else if (overSpeed >= 30) {
        return 25000;
    } else if (overSpeed >= 25) {
        return 18000;
    } else if (overSpeed >= 20) {
        return 15000;
    } else if (overSpeed >= 15) {
        return 12000;
    } else {
        return 9000;
    }
}

int main() {
    int limitSpeed = 100;  // 制限速度
    int mySpeed = 95;  // 自分の速度
    int overSpeed = mySpeed - limitSpeed;

    printf("最高速度：%dkm/h、あなたの速度：%dkm/h\n", limitSpeed, mySpeed);

    int result = CheckSpeedOver(overSpeed);

    if (result == 0) {
        printf("スピード違反ではありません。\n");
    } else if (result < 0) {
        printf("速度超過：6ヶ月以下の懲役または10万円以下の罰金\n");
    } else {
        printf("速度超過：罰金は%d円です。\n", result);
    }

    return 0;
}
