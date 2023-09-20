#include<stdio.h>
int exercise1() {
	/*Exercise 1: Odd or Even Write a program to check whether a given number is odd or even.*/
	int myint;
	printf("Please enter an Integer:\n");
	scanf_s("%d", &myint);
	if (myint % 2 == 0) {
		printf("%d is odd", myint);
	}
	else
	{
		printf("%d is even", myint);
	}

	/*Exercise 2: Largest Among Three Numbers
Write a program that takes three numbers as input and finds the largest among them.*/
	printf("\n");
	printf("Please enter 3 Integer:\n");
	int first, second, third;
	scanf_s("%d %d %d", &first, &second, &third);

	if ((first >= second) && (second >= third)) {
		printf("first is the largest");
	}
	else if ((second >= first) && (first >= third)) {
		printf("second is the largest");
	}
	else
	{
		printf("third is the largest");
	}
	return 0;

	exercise3();
}