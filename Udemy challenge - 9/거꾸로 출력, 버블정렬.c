#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    char string[25][50], temp[25];
    int l, i, n, j;

    
    printf("<< ���ڿ� �Ųٷ� ����ϱ� >>\n");
    printf("Input the string :");
    scanf("%s", str);

    l = strlen(str);

    printf("�Ųٷ� ����� ���ڿ��� : ");

    for (i = l; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
   

    printf("\n\n<< ���������� �̿��� �������� �迭 >> \n");
   

    printf("Input number of strings :");
    scanf("%d", &n);

    printf("Input string %d��: \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", string[i]);
    }

    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++)
            if (strcmp(string[j], string[j + 1]) > 0)
            {                                                      //���� �����÷ο� ������ sizof -1 ���־����
                strncpy(temp, string[j], sizeof(temp) - 1);
                strncpy(string[j], string[j + 1], sizeof(string[j]) - 1);
                strncpy(string[j + 1], temp, sizeof(string[j] + 1) - 1);
            }
    printf("\n");
    printf("<< �������� ����>>\n");

    for (i = 0; i < n; i++)
        printf("%s\n", string[i]);

    return 0;
}

