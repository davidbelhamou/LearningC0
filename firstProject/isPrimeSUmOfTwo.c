#include<stdio.h>
int isPrime_(int a);

void isSumPrime() {
	printf("please enter a Number\n");
	int userInput;
	scanf_s("%d", &userInput);
	if (userInput == 1 || userInput == 0) {
		printf("Please put a Nmber bigger than one");
	}

	for (int i = 2; i < userInput / 2; ++i) {
		if (isPrime_(i) == 1) {
			int ret = userInput - i;
			if (isPrime_(ret)) {
				printf("%d = %d + %d\n", userInput, i , ret);
			}

		}
	}

}


// check if a Number is Prime
int isPrime_(int a) {
	if (a <= 1) {
		return 0;
	}
	if (a == 2) {
		return 1;
	}
	if (a % 2 == 0) {
		return 0;
	}
	int flag = 1;
	for (int j = 2; j <= a / 2; ++j) {

		if (a % j == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}