/*

  순차탐색 알고리즘과 이진탐색 알고리즘의 성능 비교

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define len 10000000L
int list[len];

int LSearch(int list[], int n, int targetnum) {
	int i;
	
	for (i = 0; i < n; i++) {

		if (targetnum == list[i]) {
			return i;
		}
	}
	return -1;
}

int BSearch(int list[], int n, int targetnum) {
	int left = 0;
	int right = n - 1;
	int mid;
	
	while (left <= right) {
		
		mid = (left + right) / 2;
		if (targetnum == list[mid]) {
			return mid;
		}
		else {
			if (targetnum < list[mid]) {
				right = mid - 1;
			}
			else {
				left = mid + 1;
			}
		}
	}
	return -1;
}


int main(void) {
	
	int target;
	int index;
	clock_t start, finish;
	clock_t time_elapsed_LS, time_elapsed_BS;

	for (int i = 0; i < len; i++) {
		list[i] = i;
	}
	
	// 찾고자 하는 값을 입력한다. 
	printf("\nEnter a target number (try the worst case): ");
	scanf("%d", &target);

	printf("target = %d\n", target);

	// linear search (순차탐색) 수행 

	start = clock();
	index = LSearch(list, len, target);
	finish = clock();
	time_elapsed_LS = finish - start;
	
	printf("\n순차탐색: target %d의 위치 인덱스값은 %d이다. 소요시간은 % lf초이다", target, index, (double)time_elapsed_LS);

	// binary search (이진탐색) 수행 
	start = clock();
	index = BSearch(list, len, target);
	finish = clock();
	time_elapsed_BS = finish - start;
	printf("\n이진탐색: target %d의 위치 인덱스값은 %d이다. 소요시간은 % lf초이다", target, index, (double)time_elapsed_BS);

	return 0;
}



