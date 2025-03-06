#include <iostream>
using namespace std;
int* sum_raw_elements(int** matrix, int n, int m);
int* sum_colomn_elements(int** matrix, int n, int m);

int main()
{
	int n, m;
	int** matrix;

	cout << "Input size of the Matrix: ";
	cin >> n >> m;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100;
		}
		
	}


	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int* array = sum_raw_elements(matrix,n,m);

	cout << "Sum of raw elements: ";

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;

	delete[] array;

	
	array = sum_colomn_elements(matrix, n, m);
	cout << "Sum of colomn elements: ";

	for (int i = 0; i < m; i++)
	{
		cout << array[i] << " ";
	}

	delete[] array;

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

	return 0;
}