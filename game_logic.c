#include "game_logic.h"
#include <stdio.h>

void check_guess(int target, int guess, char* result) {
    if (guess < target) {
        printf(result, "�Ӥp�F�I");
    }
    else if (guess > target) {
        printf(result, "�Ӥj�F�I");
    }
    else {
        printf(result, "���ߧA�A�q��F�I");
    }
}
