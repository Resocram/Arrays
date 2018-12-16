/*#include <stdio.h>
#include <stdlib.h>

void addValue(int array[], int result[], int insert, int size);
void printArray(int array[], int size);
int main(void) {
	int array[] = { 2, 3, 4, 5 };
	int result[5] = { 0 };
	addValue(array, result, 1, 4);
	printArray(result, 5);

	system("PAUSE");
	return 0;

}

void addValue(int array[], int result[], int insert, int size) {
	int index;
	int yetToAdd = 1;
	for (index = 0; index < size; index++) {
		if (yetToAdd == 1) {
			if (array[index] > insert) {
				result[index] = insert;
				result[index + 1] = array[index];
				yetToAdd = 0;
			}
			else {
				result[index] = array[index];
				if (index == size - 1) {
					result[index + 1] = insert;
				}
			}
		}
		else {
			result[index + 1] = array[index];
		}
	}
}

void printArray(int array[], int size) {
	int index;
	for (index = 0; index < size; index++) {
		printf("%d ", array[index]);
	}
}
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMCOLS 3

void sumColumn(int array[][NUMCOLS], int numrows, int result[]);
void printArray(int array[], int size);
int main(void) {
	int array[][NUMCOLS] = { {1,2,4},{1,2,3} ,{1,2,3} };
	int result[3] = { 0 };
	sumColumn(array, 3, result);
	printArray(result, 3);
	system("PAUSE");
	return 0;
}

void sumColumn(int array[][NUMCOLS], int numrows, int result[]) {
	int index;
	int index2;
	for (index = 0; index < NUMCOLS; index++) {
		for (index2 = 0; index2 < numrows; index2++) {
			result[index] += array[index2][index];
		}
	}
}
void printArray(int array[], int size) {
	int index;
	for (index = 0; index < size; index++) {
		printf("%d ", array[index]);
	}
}