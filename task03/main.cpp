#include"util.h"


int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n;

	cout << "input size of the matrix:";
	cin >> n ;

	init(matrix, n, n, 0, 10);
	cout << "matrix:\n";
	cout << convert_to_string(matrix, n, n) << endl;

	int row = find_row_with_extreme_sum(matrix, n);

	cout << "index of row with sum is " << row + 1<<endl;

	return 0;
}