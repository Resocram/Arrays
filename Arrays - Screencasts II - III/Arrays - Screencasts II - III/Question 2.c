/*#include <stdio.h>
#include <stdlib.h>
int evenarraycounter(int array[], int size);
int search(int array[], int size, int toFind);
int similarnumber(int array[], int array2[], int size);
int main(void) {
	int array[] = { 5, 6, 7, 8, 9, 10 };
	int array2[] = { 5, 1, 2, 0, 6, 7 };
	int value = similarnumber(array, array2, 6);
	printf("There are %d similar values in both arrays.\n", value);

	system("PAUSE");
	return 0;

}

int evenarraycounter(int array[], int size) {
	int index;
	int count = 0;
	for (index = 0; index < size; index++) {
		if (array[index] % 2 == 0) {
			count++;
		}
	}
	return count;
}

int search(int array[], int size, int toFind) {
	int index;
	for (index=0; index<size; index++){
		if (array[index] == toFind) {
			return index;
		}
	}
	return -1;
}

int similarnumber(int array[], int array2[], int size) {
	int index;
	int index2;
	int count = 0;
	for (index = 0; index < size; index++) {
		for (index2 = 0; index2 < size; index2++) {
			if (array[index] == array2[index2]) {
				count++;
			}
		}
	}
	return count;
}
*/