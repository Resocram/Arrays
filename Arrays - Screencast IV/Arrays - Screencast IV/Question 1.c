/*#include <stdio.h>
#include <stdlib.h>

void copyNonNeg(int array[], int size, int nonNeg[]);
int indexOfSmallest(int array[], int size, int startindex);
void printArray(int array[], int size);
void Sort(int array[], int size);
int main(void) {
	int array[] = { 6, -5, 2, -1, 8, -2, 3, 3 };
	Sort(array, 8);
	printArray(array, 8);
	system("PAUSE");
	return 0;
}

void copyNonNeg(int array[], int size, int nonNeg[]) {
	int index;
	for (index = 0; index < size; index++) {
		if (array[index] >= 0) {
			nonNeg[index] = array[index];
		}
		else {
			nonNeg[index] = 0;
		}
	}
}

int indexOfSmallest(int array[], int size, int startindex) {
	int smallestindex;
	smallestindex = startindex;
	for (startindex; startindex < size; startindex++) {
		if (array[startindex] < array[smallestindex]) {
			smallestindex = startindex;
		}
	}
	return smallestindex;
}
void printArray(int array[], int size) {
	int index;
	for (index = 0; index < size; index++) {
		printf("%d ", array[index]);
	}
}

void Sort(int array[], int size) {
	int index;
	int smallestindexvalue;
	int temp;
	for (index = 0; index < size-1; index++) {
		smallestindexvalue = indexOfSmallest(array, size, index);
		temp = array[index];
		array[index] = array[smallestindexvalue];
		array[smallestindexvalue] = temp;
	}
}
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {

}
