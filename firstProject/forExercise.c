#include<stdio.h>
#include<ctype.h>

int Forloop() {
	/*Exercise 3: Sum of N Integers
Write a program that calculates the sum of the first N integers, where N is input by the user.*/

	int myint;
	printf("Please enter an Integer you want to Sum to:\n");
	scanf_s("%d", &myint);

	// check if it's a integer
	if (myint <= 0) {
		return -1;
	}
	int sum = 0;
	for (int i = 0; i <= myint; i++) {
		sum += i;
	}
	printf("The result is %d", sum);
}