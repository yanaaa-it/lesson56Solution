#include"util.h"


int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n, m;

	cout << "input size of the matrix:";
	cin >> n >> m;

	init(matrix, n, m, 0, 10);
	cout << "matrix:\n";
	cout << convert_to_string(matrix, n, n) << endl;

	int sum = sum_element(matrix, n);
	cout << "the sum of main diagonale elemant is " << sum << endl;
	int sum = sum_additional_element(matrix, n);
	cout << "the sum of additional elemant is " << sum << endl;
	int sum = sum_bound_element(matrix, n);
	cout << "the sum of bound elemant is " << sum << endl;

	return 0;
}