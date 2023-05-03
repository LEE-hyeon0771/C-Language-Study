#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool valid_input(int N, int scores[]) {
    if (!(1 <= N && N <= 100)) {
        return false;
    }
    for (int i = 0; i < N; i++) {
        if (!(0 <= scores[i] && scores[i] <= 100)) {
            return false;
        }
    }
    return true;
}

int main() {
    int N = 0;
    scanf_s("%d", &N);

    int scores[100];
    //int* scores = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &scores[i]);
    }

    if (!valid_input(N, scores)) {
        printf("ERROR\n");
        return 0;
    }

    while (N > 1) {
        int winners[100];
        int index = 0;
        for (int i = 0; i < N; i += 2) {
            if (i + 1 < N) {
                winners[index++] = scores[i] > scores[i + 1] ? scores[i] : scores[i + 1];
            }
            else {
                winners[index++] = scores[i];
            }
        }

        for (int i = 0; i < index; i++) {
            printf("%d ", winners[i]);
        }
        printf("\n");

        N = index;
        for (int i = 0; i < N; i++) {
            scores[i] = winners[i];
        }
    }

    return 0;
}