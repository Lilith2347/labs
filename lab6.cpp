#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "Russian");
	int matrix[3][2];
	cout << "Введите матрицу:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << matrix[i][j] << endl;
		}
	}

}