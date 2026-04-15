#include"util.h"
int sum_number(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][n-1-i];
	}
	return sum;
}