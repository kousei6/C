/*
収入に応じて税金の金額を計算するプログラムを作成する
*/
#include <stdio.h>

int calc_tax(int income) {  //  税金を計算する関数
    int tax;
    if (income < 100) {
        tax = income * 5 / 100;
    } else if (income < 300) {
        tax = income * 10 / 100;
    } else {
        tax = income * 20 / 100;
    }
    return tax;
}

int main() {  // メイン関数
    int income, tax;
    printf("年収を入力してください(単位：万円):");
    scanf("%d", &income);
    tax = calc_tax(income);
    printf("年収: %d万円\n", income);
    printf("税金: %d万円\n", tax);
    return 0;
}
