#include "number_generator.h"
#include <stdlib.h>
#include <time.h>

int generate_number() {
    // 初始化隨機數種子
    srand((unsigned int)time(NULL));
    return rand() % 100 + 1; // 返回 1 到 100 的隨機數
}
