#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 10

void printStars(int length);
int main(void) {
	int value;
	int bin[SIZE] = {0};
	int count;
	printf("Please enter a value between 1 and 100:\n");
	scanf("%d", &value);
	while (value >= 1 && value <= 99) {
		count = 0;
		while (value > 0) {
			value -= 10;
			count++;
		}
		bin[count-1] += 1;
		scanf("%d", &value);
	}
	int lownum = 1;
	int highnum = 10;
	int increment = 10;
	int row = 0;
	while (lownum != 101) {
		printf("%d - %d: ", lownum, highnum);
		printStars(bin[row]);
		row++;
		lownum += increment;
		highnum += increment;
		printf("\n");

	}
	system("PAUSE");
	return 0;
}

void printStars(int length) {
	int count = 0;
	while (length > count) {
		printf("*");
		count++;
	}
	
}
