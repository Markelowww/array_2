#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include "main.h"

int main() {
	int64_t rows64, columns64;

	printf("Enter the quantity of rows: ");
	scanf("%" SCNd64, &rows64);
	if (rows64 == 0) {
		printf("None");
		return 0;
	}
	int64_t** myArray = (int64_t**)malloc(sizeof(int64_t*) * rows64);
	int64_t* number—olumns64 = (int64_t*)malloc(sizeof(int64_t) * rows64);
	FillingArray(rows64, number—olumns64, myArray);
	int64_t* min64 = arrayIntMin(myArray, rows64, number—olumns64);
	printf("Minimum element = %d\n", *min64);
	SubtractingMinElement(rows64, number—olumns64, myArray, min64);
	ArrayOutput(rows64, number—olumns64, myArray);
	MemoryCleansing(rows64, myArray);
	return 0;
}