#include<stdio.h>
int isPrime(int a);

// Prime Numbers Between Two Integers
int isPrimeBetween(){

	printf("Please enter two numbers\n");
	int a, b;
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		int c = b;
		b = a;
		a = c;
	}

	int flag ;
	printf("Here all the prime Number between %d and %d\n", a, b);

	for (int i = a + 1; i < b; ++i) {
		flag = isPrime(i);
		if (flag == 1) {
			printf("%d ", i);
		}


	}

}
int isPrime(int a) {
	int flag = 1;
	for (int j = 2; j <= a / 2; ++j) {

		if (a % j == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}