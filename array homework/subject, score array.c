#pragma warning(disable : 4996)
#include <stdio.h>
int main(void) {
    char subject[4][5] = { "����", "����", "����", "���" };
    char student[2][5] = { "ö��", "����" };
    int score[2][4] = { 0 };


    for (int i = 0; i < 2; i++) {
        printf("%s�� ������ �Է��Ͻÿ�.\n", student[i]);
        for (int j = 0; j < 3; j++) {
            printf("%s : ", subject[j]);
            scanf_s("%d", &score[i][j]);
        }
        score[i][3] = (score[i][0] + score[i][1] + score[i][2]) / 3;
    }



    for (int i = 0; i < 2; i++) {
        printf("%s\n", student[i]);
        for (int j = 0; j < 4; j++) {
            if (j == 3) {
                printf("%s : %d��\n", subject[j], score[i][j]);
                break;
            }
            printf("%s : %d��, ", subject[j], score[i][j]);
        }

    }
}