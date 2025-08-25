/*
グローバル変数を使って「共通の貯金残高」を管理するプログラムを作成する。
*/
#include <stdio.h>

// グローバル変数の宣言
int balance = 0;

// プロトタイプ宣言
void deposit(int amount);
void printBalance(void);

int main(void) {
    deposit(1000);
    
    deposit(500);
    
    printBalance();

    int balance = 9999;

    printf("ローカルのbalance = %d\n", balance);

    printBalance();

    return 0;
}

// deposit関数の定義
void deposit(int amount) {
    balance = balance + amount;
}

// printBalance関数の定義
void printBalance(void) {
    printf("現在の残高: %d円\n", balance);
}
