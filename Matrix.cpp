#include "Matrix.h"
#include <iostream>
using namespace std;


//default constructor
Matrix::Matrix() : matrix(0) {
	cout << "default constr" << endl;
}

//initialization constructor
Matrix::Matrix(int raws, int columns) : n(raws), m(columns) 
{
	matrix = new float*[n];
	if (!matrix) exit(1);

	for (int i = 0; i < n; i++) {
		matrix[i] = new float[m];
		for (int j = 0; j < m; j++) {
			matrix[i][j] = 0;
		}
	}
	cout << "constr" << endl;
}

//copy constructor
Matrix::Matrix(Matrix &object)
{
	matrix = new float*[object.n];
	if (!matrix) exit(1);

	for (int i = 0; i < object.n; i++) {
		matrix[i] = new float[object.m];
		for (int j = 0; j < object.m; j++)
			matrix[i][j] = object.matrix[i][j];
	}
	n = object.n;
	m = object.m;
	cout << "copy constr" << endl;
}

//destructor
Matrix::~Matrix() 
{
	for (int i = 0; i < n; i++)
		delete[] matrix[i];
	cout << "destr" << endl;
}


int Matrix::inputNumberOfRaws()
{
	cout << "Enter number of raws" << endl;
	int n;
	cin >> n;
	return n;
}

int Matrix::inputNumberOfColumns()
{
	cout << "Enter number of columns" << endl;
	int m;
	cin >> m;
	return m;
}

void Matrix::inputData(int i, int j)
{
	cin >> matrix[i][j];
}

void Matrix::show() 
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}
}

bool Matrix::isValid()
{
	if (cin.fail())
	{
		cin.clear();	
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		return false;
	}
	return true;
}

void Matrix::changeArray()
{
	cout << "Enter value" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			inputData(i, j);
	cout << "Successfully changed" << endl;
}

void Matrix::sort()
{
	for (int i = 0; i< n; i++)
		for(int j = 0; j< m;j++)
			for (int a = 0; a < n; a++)
				for (int b = 0; b < m; b++)
					if (matrix[i][j] > matrix[a][b])
					{
						float temp = matrix[i][j];
						matrix[i][j] = matrix[a][b];
						matrix[a][b] = temp;
					}
}
