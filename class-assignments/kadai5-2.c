/*
数字の右10ビットの2ビットパターンの数を
把握するプログラムを作成
*/

#include <stdio.h>

int main(void) {
    int test_number = 1; // 適当な数字に初期化
    int zero_zero = 0, zero_one = 0, one_zero = 0, one_one = 0; // 各2ビットパターンの数と保管する整数を初期化
    int number_time = 0;

    printf("調査対象の数字: %d\n", test_number);
    printf("右10ビットを2ビットごとに解析します。\n");

    int temp = test_number;
    while (number_time < 5) { // 右10ビットなので2ビットごとに5回
        int pattern = temp & 0x3; // 右2ビットを抽出
        switch (pattern) {
            case 0: // 00
                zero_zero++;
                printf("00を発見しました\n");
                break;
            case 1: // 01
                zero_one++;
                printf("01を発見しました\n");
                break;
            case 2: // 10
                one_zero++;
                printf("10を発見しました\n");
                break;
            case 3: // 11
                one_one++;
                printf("11を発見しました\n");
                break;
            default:
                break;
        }
        temp = temp >> 2; // 2ビット右シフト
        number_time++;
    }

    printf("00: %d回, 01: %d回, 10: %d回, 11: %d回\n", zero_zero, zero_one, one_zero, one_one);

    return 0;
}