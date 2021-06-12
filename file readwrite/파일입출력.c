#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 3

struct info {
    char name[20];
    char tel[20];
};

enum { QUIT, INPUT_DATA, SAVE_TEXT, SAVE_BINARY, LOAD_TEXT, LOAD_BINARY };

// �޴��� �����ϴ� �Լ�
int GetMenu(void);

// 1. �̸��� ��ȭ��ȣ�� ����ü �迭�� �Է��ϴ� �Լ�
void InputData(struct info* arr, int size);

// 2. 1������ ����ü �迭�� �Էµ� ������ �ؽ�Ʈ ���Ϸ� �����ϴ� �Լ�
int SaveAsText(const char* fname, struct info* arr, int size);

// 3. 1������ ����ü �迭�� �Էµ� ������ ���̳ʸ� ���Ϸ� �����ϴ� �Լ�
int SaveAsBinary(const char* fname, struct info* arr, int size);

// 4. �ؽ�Ʈ ������ open�Ͽ� �о ����ü �迭�� �ٽ� �����ϴ� �Լ�
int LoadText(const char* fname, struct info* arr, int size);

// 5. ���̳ʸ� ������ open�Ͽ� �о ����ü �迭�� �ٽ� �����ϴ� �Լ�
int LoadBinary(const char* fname, struct info* arr, int size);

// ����ü �迭�� ����� ������ ����ϴ� �Լ�	
void ShowList(struct info* arr, int size);

int main(void) {
    int menu;
    struct info data[MAX] = { 0, };
    int bDataInput = 0;
    int bTextSaved = 0;
    int bBinarySaved = 0;

    while (1) {
        menu = GetMenu();
        if (menu == QUIT)
            break;
        switch (menu) {
        case INPUT_DATA:
            InputData(data, MAX);
            bDataInput = 1;
            break;

        case SAVE_TEXT:
            if (bDataInput == 1) {
                if (SaveAsText("test.txt", data, MAX) == 1)
                    bTextSaved = 1;
                else
                    printf("�ؽ�Ʈ ���� ���� ����\n");
            }
            else
                printf("���� �̸��� ��ȭ��ȣ�� �Է��ϼ���.\n");
            break;

        case SAVE_BINARY:
            if (bDataInput == 1) {
                if (SaveAsBinary("test.dat", data, MAX) == 1)
                    bBinarySaved = 1;
                else
                    printf("�ؽ�Ʈ ���� ���� ����\n");
            }
            else
                printf("���� �̸��� ��ȭ��ȣ�� �Է��ϼ���.\n");
            break;

        case LOAD_TEXT:
            if (bDataInput != 1)
                printf("���� �̸��� ��ȭ��ȣ�� �Է��ϼ���.\n");
            else if (bTextSaved != 1)
                printf("���� �ؽ�Ʈ ������ �����ϼ���.\n");
            else {
                if (LoadText("test.txt", data, MAX) != 1)
                    printf("�ؽ�Ʈ ���� �б� ����\n");
                else
                    ShowList(data, MAX);
            }
            break;

        case LOAD_BINARY:
            if (bDataInput != 1)
                printf("���� �̸��� ��ȭ��ȣ�� �Է��ϼ���.\n");
            else if (bBinarySaved != 1)
                printf("���� ���̳ʸ� ������ �����ϼ���.\n");
            else {
                if (LoadBinary("test.dat", data, MAX) != 1)
                    printf("���̳ʸ� ���� �б� ����\n");
                else
                    ShowList(data, MAX);
            }
            break;
        }
    }
}



int GetMenu(void) {
    printf("-------------------------\n");
    printf("1. �̸��� ��ȭ��ȣ �Է�\n");
    printf("2. �ؽ�Ʈ ���Ϸ� ����\n");
    printf("3. ���̳ʸ� ���Ϸ� ����\n");
    printf("4. �ؽ�Ʈ ���� �б�\n");
    printf("5. ���̳ʸ� ���� �б�\n");
    printf("0. ����\n");
    printf("-------------------------\n");

    int choice = 0;
    printf("���� : ");
    scanf("%d", &choice);
    return choice;
}


void InputData(struct info* arr, int size) {
    int i = 0;

    for (i = 0; i < size; i++) {
        printf("�̸��� �Է��ϼ��� : ");
        scanf("%s", arr[i].name);
        printf("��ȭ��ȣ�� �Է��ϼ��� : ");
        scanf("%s", arr[i].tel);
    }
}


int SaveAsText(const char* fname, struct info* arr, int size) {
    FILE* fp = fopen(fname, "wt");

    if (fp == '\0') {
        return 0;
    }
    if (fwrite(arr, sizeof(struct info), size, fp) != size) {
        return 0;
    }
    fclose(fp);
    return 1;
}


int SaveAsBinary(const char* fname, struct info* arr, int size) {
    FILE* fp = fopen(fname, "wb");

    if (fp == '\0') {
        return 0;
    }
    if (fwrite(arr, sizeof(struct info), size, fp) != size) {
        return 0;
    }
    fclose(fp);
    return 1;
}


int LoadText(const char* fname, struct info* arr, int size) {
    FILE* fp = fopen(fname, "rt");
    

    fgets(arr, sizeof(struct info) * size, fp);

    fclose(fp);
    return 1;
}


int LoadBinary(const char* fname, struct info* arr, int size) {
    FILE* fp = fopen(fname, "rb");
    

    fread(arr, sizeof(struct info) * size, 1, fp);

    fclose(fp);
    return 1;
}

 
void ShowList(struct info* arr, int size) {
    int i = 0;
    printf("\n");
    printf("�̸�         ��ȭ��ȣ\n");
    printf("---------------------\n");
    for (i = 0; i < size; i++) {
        printf("%s  %s\n", arr[i].name, arr[i].tel);
    }
    printf("---------------------\n");
}