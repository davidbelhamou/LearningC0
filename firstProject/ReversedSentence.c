#include<stdio.h>
void reccursionInverse();

int reverSentence() {
	printf("Enter a Sentence\n");
	reccursionInverse();
	return 0;
}

void reccursionInverse() {
	char c;
	scanf_s("%c", &c);
	if (c != '\n') {
		reccursionInverse();
		printf("%c", c);
	}

}