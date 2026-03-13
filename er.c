#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int answer, guess, tries = 0;

    srand(time(NULL));
    answer = rand() % 100 + 1;

    printf("=== 숫자 맞추기 게임 ===\n");
    printf("1부터 100 사이의 숫자를 맞춰보세요!\n\n");

    while (1) {
        printf("숫자 입력: ");
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("더 큰 숫자입니다!\n");
        } else if (guess > answer) {
            printf("더 작은 숫자입니다!\n");
        } else {
            printf("\n정답! %d번 만에 맞췄습니다!\n", tries);
            break;
        }
    }

    return 0;
}
