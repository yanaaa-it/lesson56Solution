#include"util.h"


int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n, m;

	cout << "input size of the matrix:";
	cin >> n >> m;

	init(matrix, n, m, 0, 10);
	cout << "matrix:\n";
	cout << convert_to_string(matrix, n, m);

	return 0;
}