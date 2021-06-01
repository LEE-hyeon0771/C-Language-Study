#include<stdio.h>

int main() {
    int swap, x = 0, y = 0;



    printf("Before swapping: x= ");
    scanf_s("%d", &x);

    printf("Before swapping: y= ");
    scanf_s("%d", &y);

    swap = x;
    x = y;
    y = swap;

    printf("After swapping: x=%d, y=%d\n", x, y);
}