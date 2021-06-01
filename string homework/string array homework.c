#pragma warning(disable : 4996)
#include<stdio.h>
#include<string.h>
#define SIZE 256


void print_array(char str1[4][16], int i);
void reverse_array(char str1[4][16], char str2[4][16], int i);
int main() {
	char s[SIZE] = { 0 };
	int i;
	int start;

	printf("<<1. 문자열을 공백 포함해서 입력>>\n");
	printf("입력>> ");
	gets(s);
	printf("출력>> ");
	puts(s);

	printf("\n");

	i = 0;
	start = 0;

	while (s[i] != 0) {
		for (; s[i] != ' '; i++);
		if (s[start] >= 'a' && s[start] <= 'z') {
			s[start] = s[start] - 'a' + 'A';
		}
		start = i + 1;
		i++;
	}

	printf("대문자로 변경한 문자열 : ");
	puts(s);

	int j;
	char space[256] = { 0 };
	for (i = 0, j = 0; s[i] != 0; i++) {
		if (s[i] != ' ')
			space[j++] = s[i];
	}
	space[j] = 0;
	printf("공백 제거한 문자열 : ");
	puts(space);
	
	printf("\n");



	
	printf("<< 2. 4개의 단어 입력 및 내용과 같이 출력>>\n");

	char str1[4][16];
	char str2[4][16];
	for (int i = 0; i < 4; i++) {
		printf("%d행 입력 >> ", i + 1);
		scanf("%s", str1[i]);
	}


	reverse_array(str1, str2, 4);
	printf("---reverse된 내용---\n");
	print_array(str2, 4);

	return 0;

}

void reverse_array(char str1[4][16], char str2[4][16], int i) {

	for (int j = 0; j < i; j++) {
		strcpy(str2[i - j - 1], str1[j]);
		}
}
void print_array(char str2[4][16], int i) {
		
	for (int j = 0; j < i; j++) {
		printf("%d행 : 단어=%s,     길이=%d\n", j + 1, str2[j], strlen(str2[j]));
	}
}	


	
    

		
	

	




