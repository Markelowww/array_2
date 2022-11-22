#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

void MemoryCleansing(const int64_t& rows64, int64_t** myArray)
{
	for (size_t i = 0; i < rows64; i++)
	{
		free(myArray[i]);
	}
	free(myArray);
}

void ArrayOutput(const int64_t& rows64, int64_t* numberÑolumns64, int64_t** myArray)
{
	printf("Array output:\n");
	for (size_t i = 0; i < rows64; i++)
	{
		for (size_t j = 0; j < numberÑolumns64[i]; j++)
		{
			printf("array[%d][%d] = %d  ", i, j, myArray[i][j]);
		}
		printf("\n");
	}
}

int64_t* arrayIntMin(int64_t** myArray, int64_t rows64, int64_t* numberÑolumns64) {
	int64_t* min64 = &myArray[0][0];
	for (size_t i = 0; i < rows64; i++)
	{
		for (size_t j = 0; j < numberÑolumns64[i]; j++)
		{
			if (myArray[i][j] < *min64)
			{
				min64 = &myArray[i][j];
			}
		}
	}
	return min64;
}

void SubtractingMinElement(const int64_t& rows64, int64_t* numberÑolumns64, int64_t** myArray, int64_t* min64)
{
	for (size_t i = 0; i < rows64; i++)
	{
		for (size_t j = 0; j < numberÑolumns64[i]; j++)
		{
			myArray[i][j] -= *min64;
		}
	}
}

void FillingArray(const int64_t& rows64, int64_t* numberÑolumns64, int64_t** myArray)
{
	int64_t columns64;
	for (size_t i = 0; i < rows64; i++)
	{
		printf("Enter the quantity of elements in %d line: ", i + 1);
		scanf("%" SCNd64, &columns64);
		numberÑolumns64[i] = columns64;
		myArray[i] = (int64_t*)malloc(sizeof(int64_t) * columns64);
	}
	int64_t element64;
	for (size_t i = 0; i < rows64; i++)
	{
		for (size_t j = 0; j < numberÑolumns64[i]; j++)
		{
			printf("array[%d][%d]: ", i, j);
			scanf("%" SCNd64, &element64);
			myArray[i][j] = element64;
		}
	}
}