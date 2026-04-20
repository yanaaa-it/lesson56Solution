#include"util.h"


int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n;

	cout << "input size of the matrix:";
	cin >> n ;

	init(matrix,n, n, 0, 10);
	print( "matrix:\n");
	print(convert_to_string(matrix, n, n));

	int max = find_max_number(matrix, n);
	int min = find_min_number(matrix, n);

	print("max number " + to_string(max));
	print( "min number" + to_string(min));

	return 0;
}