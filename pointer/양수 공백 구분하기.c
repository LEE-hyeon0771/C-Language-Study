#pragma warning(disable : 4996)
#include<stdio.h>

void reverse_array(int* a, int* b, int len) {
    int j = len - 1;
    for (int i = 0; i < len; i++) {
        b[j] = a[i];
        j--;
    }
}

int main(){
printf("2. 양수를 공백으로 구분하여 입력(0이하 종료)\n");
int a[100] = { 0 };
int b[100] = { 0 };
int i = 0;
int len = 0;
for (i = 0; i < 100; i++) {
    scanf("%d", &a[i]);
    if (a[i] <= 0) {
        a[i] == NULL;
        break;
    }
    else if (a[i] > 0 || a[i] == ' ') {
        len = len + 1;
    }
}
    reverse_array(a, b, len);
    for (i = 0; i < len; i++) {
        printf("%d ", b[i]);
    }
}
