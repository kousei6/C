/*
カメとウサギの物語とシュミレーションするプログラムを作成する。
*/

#include <stdio.h>

int main() {
    int turtle_position = 0; // カメの現在位置
    int rabbit_position = 0; // ウサギの現在位置
    int rabbit_sleeping = 0; // ウサギが寝ているかどうか

    printf("ウサギ：100メータダッシュ競争だよ！\n");
    printf("カメ：良い...よ...\nよーいドン！\n");

    while (turtle_position < 100 && rabbit_position < 100) {
        if (rabbit_position - turtle_position >= 50) {
            rabbit_sleeping = 1; // ウサギが寝る
            printf("ウサギ：楽勝！少し休もう。\n");
        }

        if (turtle_position >= 95 && rabbit_sleeping) {
            rabbit_sleeping = 0; // ウサギが起きる
            printf("ウサギ：良く寝た。カメはどこ？やばい！\n");
        }

        if (!rabbit_sleeping) {
            rabbit_position += 5; // ウサギが走る
            turtle_position += 2; // カメが走る
            printf("ウサギ：カメ君遅いぞう\n");
        }

        if (rabbit_sleeping) {
            turtle_position += 2; // カメだけが走る
            printf("ウサギ：zzzzzzz\n");
        }

        printf("カメ：走...る...ぞう\n");
        printf("ウサギの現在位置：%dメータ \n", rabbit_position);
        printf("カメの現在位置：%dメータ \n", turtle_position);
    }

    if (turtle_position >= 100) {
        printf("カメ：勝...で...す\n");
        printf("ウサギ：負けた！なんで？\n");
    }

    if (rabbit_position >= 100) {
        printf("ウサギ：勝った！\n");
        printf("カメ：負...け...た...\n");
    }

    return 0;
}