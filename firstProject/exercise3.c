#include<stdio.h>
#include <ctype.h>

int exercise3(){
	/*Exercise 3: Check Vowel or Consonant
	Write a program to check whether an entered character is a vowel or a consonant.*/
	printf("Please enter a letter\n");

	//Get user input
	char user_input;
	scanf_s("%c", &user_input);
	user_input = tolower(user_input);

	if (isalpha(user_input)) {
		if (user_input == 101) {
			printf("the Letter is a vowel");
		}
		else
		{
			printf("The letter is a Conson");
		}
	}
	else
	{
		printf("You should enter a Letter");
	}
	

	return 0;
}