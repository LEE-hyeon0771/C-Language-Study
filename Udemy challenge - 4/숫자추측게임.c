#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int guessnum;
	int num;
	srand(time(NULL));

	printf("This is a guessing game.(숫자 추측 게임)\n\n");
	printf("I have chosen a number between 0 and 20 which you must guess\n");
	printf("\n");
	
	guessnum = rand() % 21;

	for (int i = 5; i > 0; i--) {
		printf("You have %d tries left\n", i);
		printf("Enter a guess: ");
		scanf_s("%d", &num);

		if (num == guessnum) {
			printf("Congratulations. You guessed it!\n\n");
			break;
		}
		else {
			if (num < 0 || num>20) {
				printf("Please enter a correct number\n\n");
			}
			else if(num > guessnum){
				printf("Sorry. %d is wrong. My number is less than that\n\n", num);
			}
			else if (num < guessnum) {
				printf("Sorry. %d is wrong. My number is larger than that\n\n", num);
			}
		}
	}
	printf("You don't try again. You have had five times and failed. Answer is %d\n",guessnum);
}