#include "game_logic.h"
#include <stdio.h>

void check_guess(int target, int guess, char* result) {
    if (guess < target) {
        printf(result, "太小了！");
    }
    else if (guess > target) {
        printf(result, "太大了！");
    }
    else {
        printf(result, "恭喜你，猜對了！");
    }
}
