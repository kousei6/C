/*
2次元配列を使って、コンビニエンスストアの売上を計算するプログラムを作成する
*/
#include <stdio.h>

void printStoreName(int index);
void printItemName(int index);

int main(void) {
    // 売上を格納する2次元配列（店舗×商品）
    int sales[3][4] = {
        {120, 90, 150, 130},   // Lawson
        {100, 110, 120, 140},  // Family Mart
        {130, 100, 140, 150}   // 7-Eleven
    };

    int storeSum[3] = {0, 0, 0};  // 各店舗の合計売上
    int itemSum[4] = {0, 0, 0, 0}; // 各商品の合計売上
    int maxStore = 0; // 最大売上の店舗インデックス

    // 各店舗の売上と合計を表示
    printf("コンビニエンスストアの売り上げ:\n");
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printStoreName(i);
        for (int j = 0; j < 4; j++) {
            printf(" ");
            printItemName(j);
            printf("：%d", sales[i][j]);
            storeSum[i] += sales[i][j]; 
            itemSum[j] += sales[i][j];  
        }
        printf("  合計：%d\n", storeSum[i]);
    }

    // 各商品の合計売上を表示
    printf("\n");
    printf("各品物の売り上げ:\n");
    for (int j = 0; j < 4; j++) {
        printItemName(j);
        printf("：%d ", itemSum[j]);
    }
    printf("\n");

    // 最大売上の店舗を判定
    for (int i = 1; i < 3; i++) {
        if (storeSum[i] > storeSum[maxStore]) {
            maxStore = i;
        }
    }

    // 最大売上店舗の表示
    printf("\n");
    printf("最大売り上げのコンビニエンスストア: ");
    printStoreName(maxStore);
    printf("、売り上げ： %d\n", storeSum[maxStore]);

    return 0;
}

// コンビニ名を表示する関数
void printStoreName(int index) {
    switch(index) {
        case 0: printf("Lawson"); 
        break;
        case 1: printf("Family Mart"); 
        break;
        case 2: printf("7-Eleven"); 
        break;
        default: printf("不明"); 
        break;
    }
}

// 商品名を表示する関数
void printItemName(int index) {
    switch(index) {
        case 0: printf("おにぎり"); 
        break;
        case 1: printf("サンドイッチ"); 
        break;
        case 2: printf("弁当"); 
        break;
        case 3: printf("飲み物"); 
        break;
        default: printf("不明"); 
        break;
    }
}
