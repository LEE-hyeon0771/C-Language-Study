#pragma warning(disable : 4996)
#include<stdio.h>

void main() {
    int a[10] = { 1,3,5,7,21,22,24,25,49,51 };

    int b;
    int i;

    printf("In array: 1 3 5 7 21 22 24 25 49 51\n");
    printf("Input:  ");
    scanf("%d", &b);


    for (i = 0; i < 10; i++) {
        if (b == a[i]) {
            printf("Result:\texists");
            break;
        }
    }
    if (i == 10)
    {
        for (i = 0; i < 10; i++) {
            if (b != a[i]) {
                printf("Result:\tnot exists");
                break;
            }
        }
    }
    return 0;
}