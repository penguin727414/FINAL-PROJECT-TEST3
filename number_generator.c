#include "number_generator.h"
#include <stdlib.h>
#include <time.h>

int generate_number() {
    // ��l���H���ƺؤl
    srand((unsigned int)time(NULL));
    return rand() % 100 + 1; // ��^ 1 �� 100 ���H����
}
