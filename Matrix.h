#pragma once

class Matrix
{
public:
	Matrix();						//default
	Matrix(int raws, int coulms);		//initialization
	Matrix(Matrix &);				//copy
	~Matrix();

	static int inputNumberOfRaws();
	static int inputNumberOfColumns();
	void inputData(int, int);
	float getData(int i, int j) 
	{
		return matrix[i][j]; 
	}
	void show();
	void changeArray();
	bool isValid();
	
	void sort();

private:
	float **matrix;
	int n, m;	//number of raws and columns
};
