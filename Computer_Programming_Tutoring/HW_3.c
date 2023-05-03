#include <stdio.h>

int main() {
    int N;
    scanf_s("%d", &N);

    int arr[100];
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &arr[i]);
    }

    int first_max = arr[0] > arr[1] ? arr[0] : arr[1];
    int second_max = arr[0] < arr[1] ? arr[0] : arr[1];
    int first_min = arr[0] < arr[1] ? arr[0] : arr[1];
    int second_min = arr[0] > arr[1] ? arr[0] : arr[1];

    for (int i = 2; i < N; i++) {
        if (arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != first_max) {
            second_max = arr[i];
        }

        if (arr[i] < first_min) {
            second_min = first_min;
            first_min = arr[i];
        }
        else if (arr[i] < second_min && arr[i] != first_min) {
            second_min = arr[i];
        }
    }

    printf("%d\n%d\n", second_max, second_min);

    return 0;
}