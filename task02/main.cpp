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
	print("the sum of main diagonale elemant is " + to_string(sum));
	 sum = sum_additional_element(matrix, n);
	print("the sum of additional elemant is " + to_string(sum));
	 sum = sum_bound_element(matrix, n);
	print("the sum of bound elemant is " + to_string(sum));

	return 0;
}