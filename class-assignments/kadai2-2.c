/*
1から100までの数字と「HOP」の文字列を
表示するプログラムを作成する
*/
#include <stdio.h>

int main(void)
{
    int n;

    n = 1;
    while(n <= 100) {
        if(n % 9 == 0)
            printf("\nHop ");
        printf("%d ", n);
        n = n + 1;
    }
    printf("\n");

    return 0;
}