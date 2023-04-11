#include <stdio.h>

void recursive(int n, int dash) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < dash; i++) {
        printf("--");
    }
    printf("조교님! 재귀 함수가 뭔가요?\n");
    for (int i = 0; i < dash; i++) {
        printf("--");
    }
    if (n == 1) {
        printf("재귀 함수는 자기 자신을 호출하는 함수란다\n");
    }
    else {
        printf("옛날에.. 호랑이 담배피던 시절 어떤 똑똑한 조교가 살았더랬지.\n");
        for (int i = 0; i < dash; i++) {
            printf("--");
        }
        printf("그 조교는 너무나 일처리가 빠르고 똑똑했지.\n");
        for (int i = 0; i < dash; i++) {
            printf("--");
        }
        printf("학생들 뿐만 아니라 교수님들까지 모르는 것이 있으면 매일같이 달려와 물어볼 정도였어.\n");
        for (int i = 0; i < dash; i++) {
            printf("--");
        }
        printf("그러던 중 어느 날 한 학생이 찾아와서 물었네\n");
    
    }
    recursive(n - 1, dash + 1);

    for (int i = 0; i < dash; i++) {
        printf("--");
    }
    printf("라고 말했어.\n");
}

int main() {
    int n;
    printf("정수 N을 입력하세요: ");
    scanf_s("%d", &n);
    printf("어느 날 소프트웨어학부 학생이 내게 와서 물었다.\n");
    recursive(n+1, 0);
    return 0;
}