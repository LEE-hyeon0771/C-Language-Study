#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 3

struct info {
    char name[20];
    char tel[20];
};

enum { QUIT, INPUT_DATA, SAVE_TEXT, SAVE_BINARY, LOAD_TEXT, LOAD_BINARY };

// 메뉴를 선택하는 함수
int GetMenu(void);

// 1. 이름과 전화번호를 구조체 배열에 입력하는 함수
void InputData(struct info* arr, int size);

// 2. 1번에서 구조체 배열에 입력된 내용을 텍스트 파일로 저장하는 함수
int SaveAsText(const char* fname, struct info* arr, int size);

// 3. 1번에서 구조체 배열에 입력된 내용을 바이너리 파일로 저장하는 함수
int SaveAsBinary(const char* fname, struct info* arr, int size);

// 4. 텍스트 파일을 open하여 읽어서 구조체 배열에 다시 저장하는 함수
int LoadText(const char* fname, struct info* arr, int size);

// 5. 바이너리 파일을 open하여 읽어서 구조체 배열에 다시 저장하는 함수
int LoadBinary(const char* fname, struct info* arr, int size);

// 구조체 배열에 저장된 내용을 출력하는 함수	
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
                    printf("텍스트 파일 저장 실패\n");
            }
            else
                printf("먼저 이름과 전화번호를 입력하세요.\n");
            break;

        case SAVE_BINARY:
            if (bDataInput == 1) {
                if (SaveAsBinary("test.dat", data, MAX) == 1)
                    bBinarySaved = 1;
                else
                    printf("텍스트 파일 저장 실패\n");
            }
            else
                printf("먼저 이름과 전화번호를 입력하세요.\n");
            break;

        case LOAD_TEXT:
            if (bDataInput != 1)
                printf("먼저 이름과 전화번호를 입력하세요.\n");
            else if (bTextSaved != 1)
                printf("먼저 텍스트 파일을 저장하세요.\n");
            else {
                if (LoadText("test.txt", data, MAX) != 1)
                    printf("텍스트 파일 읽기 실패\n");
                else
                    ShowList(data, MAX);
            }
            break;

        case LOAD_BINARY:
            if (bDataInput != 1)
                printf("먼저 이름과 전화번호를 입력하세요.\n");
            else if (bBinarySaved != 1)
                printf("먼저 바이너리 파일을 저장하세요.\n");
            else {
                if (LoadBinary("test.dat", data, MAX) != 1)
                    printf("바이너리 파일 읽기 실패\n");
                else
                    ShowList(data, MAX);
            }
            break;
        }
    }
}



int GetMenu(void) {
    printf("-------------------------\n");
    printf("1. 이름과 전화번호 입력\n");
    printf("2. 텍스트 파일로 저장\n");
    printf("3. 바이너리 파일로 저장\n");
    printf("4. 텍스트 파일 읽기\n");
    printf("5. 바이너리 파일 읽기\n");
    printf("0. 종료\n");
    printf("-------------------------\n");

    int choice = 0;
    printf("선택 : ");
    scanf("%d", &choice);
    return choice;
}


void InputData(struct info* arr, int size) {
    int i = 0;

    for (i = 0; i < size; i++) {
        printf("이름을 입력하세요 : ");
        scanf("%s", arr[i].name);
        printf("전화번호를 입력하세요 : ");
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
    printf("이름         전화번호\n");
    printf("---------------------\n");
    for (i = 0; i < size; i++) {
        printf("%s  %s\n", arr[i].name, arr[i].tel);
    }
    printf("---------------------\n");
}