/*
整数の値が偶数か奇数かを判定して
表示するプログラムを作成する
*/

#include <stdio.h>

int main(void) 
{
    int x;
    x = 7; // 判定したい整数を入力

    printf("変数xの値は%dです\n",x); // 変数xの値を表示

    if (x%2==0){
        printf("偶数です"); //偶数の場合の出力
    }

    if (x%2==1){
        printf("奇数です"); //奇数の場合の出力
    }

    return 0;
}