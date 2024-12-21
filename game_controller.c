#include "number_generator.h"
#include "game_logic.h"
#include <stdio.h>

void play_game() {
    printf("�w��Ө�q�Ʀr�C���I�ؼмƦr�O 1 �� 100 ����ơC\n");

    int target = generate_number();
    int guess, attempts = 0;
    char result[50];

    while (1) {
        printf("�п�J�A���q���G");
        if (scanf("%d", &guess) != 1) {
            printf("�п�J���Ī���ơI\n");
            while (getchar() != '\n'); // �M�ſ�J�w�İ�
            continue;
        }

        attempts++;
        check_guess(target, guess, result);
        printf("%s\n", result);

        if (guess == target) {
            printf("�A�`�@���դF %d ���C\n", attempts);
            break;
        }
    }
}
