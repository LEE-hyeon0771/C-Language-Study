#include <stdio.h>
#include <stdbool.h>

int main() {
    int input[10];
    int count[10] = { 0 };
    bool printed[10] = { false };

    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &input[i]);

        for (int j = 0; j < 10; j++) {
            if (input[j] == input[i]) {
                count[j]++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (!printed[i]) {
            printf("%d %d\n", input[i], count[i]);
            for (int j = i + 1; j < 10; j++) {
                if (input[j] == input[i]) {
                    printed[j] = true;
                }
            }
        }
    }

    return 0;
}