#include <iostream>
#include "logic.h"
using namespace std;

int main()
{
	int n, m;

	cout << "Input size of matrix (N and M): ";
	cin >> n >> m;
	int size = n * m;

	int* matrix = new int[size];

	for (int i = 0; i < size ; i++)
	{
		matrix[i] = rand() % 100;
	}

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			cout << matrix[m * i + j] << " ";
		}
		cout << endl;
	}

	int imax = 0;
	int jmax = 0;

	for (int i = 0; i < n; i++)
	{
	
		for (int j = 0; j < m; j++)
		{
			if (matrix[m * i + j] > matrix[m * imax + jmax])
			{
				imax = i;
				jmax = j;
			}
		}
		
	}


	cout << "Indices of max element is [" << imax + 1 << "]" << "[" << jmax + 1 << "].\n";

	imax = 0;
	jmax = 0;

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			if ( matrix[m * i + j] < matrix[m * imax + jmax])
			{
				imax = i;
				jmax = j;
			}
		}

	}


	cout << "Indices of min element is [" << imax + 1 << "]" << "[" << jmax + 1 << "].\n";

	delete[] matrix;

	return 0;
}