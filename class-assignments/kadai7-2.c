#include <stdio.h>

int main(void) {
    int step = 1; // 歩数

    printf("ロボットが歩こうとしています!\n");

    while (1) {
        if (step == 8) {
            printf("ロボットは8歩目で充電切れ!停止します。\n");
            break;
        }
        if (step == 5) {
            printf("ロボットは5歩目でバナナの皮に滑った!歩けなかった。\n");
            step++;
            continue;
        }
        printf("ロボットは %d 歩目を歩いた。\n", step);
        step++;
    }

    printf("シミュレーション終了。\n");
    return 0;
}
