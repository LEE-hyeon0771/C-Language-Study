#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    char string[25][50], temp[25];
    int l, i, n, j;

    
    printf("<< 문자열 거꾸로 출력하기 >>\n");
    printf("Input the string :");
    scanf("%s", str);

    l = strlen(str);

    printf("거꾸로 출력할 문자열은 : ");

    for (i = l; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
   

    printf("\n\n<< 버블정렬을 이용한 오름차순 배열 >> \n");
   

    printf("Input number of strings :");
    scanf("%d", &n);

    printf("Input string %d개: \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", string[i]);
    }

    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++)
            if (strcmp(string[j], string[j + 1]) > 0)
            {                                                      //버퍼 오버플로우 때문에 sizof -1 해주어야함
                strncpy(temp, string[j], sizeof(temp) - 1);
                strncpy(string[j], string[j + 1], sizeof(string[j]) - 1);
                strncpy(string[j + 1], temp, sizeof(string[j] + 1) - 1);
            }
    printf("\n");
    printf("<< 버블정렬 이후>>\n");

    for (i = 0; i < n; i++)
        printf("%s\n", string[i]);

    return 0;
}

