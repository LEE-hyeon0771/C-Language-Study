#include<stdio.h>
#include<string.h>

int count_vowel(char* arr, int length) {
	char* arr[100];
	length = strlen(arr);
	
	for (; *arr < length; arr++) {
	
		if (*arr == 'a' || *arr == 'e' || *arr == 'i' || *arr == 'o' || *arr = 'u') {
			length++;
			
		}
	}
}

void main() {
	char* arr[100];
	int length = 0;

	printf("1. ���� ���� ���� �Է�\n");
	scanf("%[^\n]", arr);

	count_vowel(arr, length);

	printf("������ %d�� �ֽ��ϴ�.\n",arr);

}