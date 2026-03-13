#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TRIES 10

int main() {
    int answer, guess, tries = 0;

    srand(time(NULL));
    answer = rand() % 100 + 1;

    printf("=== 숫자 맞추기 게임 ===\n");
    printf("1부터 100 사이의 숫자를 맞춰보세요!\n");
    printf("기회는 %d번입니다!\n\n", MAX_TRIES);

    while (tries < MAX_TRIES) {
        printf("[%d/%d] 숫자 입력: ", tries + 1, MAX_TRIES);
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("더 큰 숫자입니다!\n");
        } else if (guess > answer) {
            printf("더 작은 숫자입니다!\n");
        } else {
            printf("\n정답! %d번 만에 맞췄습니다!\n", tries);
            return 0;
        }
    }

    printf("\n게임 오버! 정답은 %d였습니다.\n", answer);
    return 0;
}
