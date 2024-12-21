#include "number_generator.h"
#include "game_logic.h"
#include <stdio.h>

void play_game() {
    printf("歡迎來到猜數字遊戲！目標數字是 1 到 100 的整數。\n");

    int target = generate_number();
    int guess, attempts = 0;
    char result[50];

    while (1) {
        printf("請輸入你的猜測：");
        if (scanf("%d", &guess) != 1) {
            printf("請輸入有效的整數！\n");
            while (getchar() != '\n'); // 清空輸入緩衝區
            continue;
        }

        attempts++;
        check_guess(target, guess, result);
        printf("%s\n", result);

        if (guess == target) {
            printf("你總共嘗試了 %d 次。\n", attempts);
            break;
        }
    }
}
