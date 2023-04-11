#include <stdio.h>

void recursive(int n, int dash) {
    if (n == 0) {
        return;
    }
    for (int i = 0; i < dash; i++) {
        printf("--");
    }
    printf("������! ��� �Լ��� ������?\n");
    for (int i = 0; i < dash; i++) {
        printf("--");
    }
    if (n == 1) {
        printf("��� �Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ�����\n");
    }
    else {
        printf("������.. ȣ���� ����Ǵ� ���� � �ȶ��� ������ ��Ҵ�����.\n");
        for (int i = 0; i < dash; i++) {
            printf("--");
        }
        printf("�� ������ �ʹ��� ��ó���� ������ �ȶ�����.\n");
        for (int i = 0; i < dash; i++) {
            printf("--");
        }
        printf("�л��� �Ӹ� �ƴ϶� �����Ե���� �𸣴� ���� ������ ���ϰ��� �޷��� ��� ��������.\n");
        for (int i = 0; i < dash; i++) {
            printf("--");
        }
        printf("�׷��� �� ��� �� �� �л��� ã�ƿͼ� ������\n");
    
    }
    recursive(n - 1, dash + 1);

    for (int i = 0; i < dash; i++) {
        printf("--");
    }
    printf("��� ���߾�.\n");
}

int main() {
    int n;
    printf("���� N�� �Է��ϼ���: ");
    scanf_s("%d", &n);
    printf("��� �� ����Ʈ�����к� �л��� ���� �ͼ� ������.\n");
    recursive(n+1, 0);
    return 0;
}