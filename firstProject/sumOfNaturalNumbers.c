#include<stdio.h>
int recursionSum(int a);

void SumNaturalNumber() {
	printf("Please enter a Number\n");
	int num;
	scanf_s("%d", &num);
	int res = recursionSum(num);
	printf("The sum of Natural number is = %d", res);
}
int recursionSum(int a) {
	if (a == 1 || a == 0) {
		return a;
	}
	return a + recursionSum(a - 1);
}