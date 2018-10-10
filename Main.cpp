#include "Matrix.h"
#include "Transition.h"
#include "Interface.h"
#include <iostream>

using namespace std;

int main() 
{
	int raws, columns;

	cout << "Enter number of raws" << endl;
	cin >> raws;
	cout << "Enter number of columns" << endl;
	cin >> columns;

	Matrix mx(raws, columns);
	
	cout << "Enter value" << endl;
	for (int i = 0; i < raws; i++)
		for (int j = 0; j < columns; j++)
		{
			mx.inputData(i, j);
			if (!mx.isValid())
			{
				cout << "INPUT ERROR. Default 0\n";
			}
		}

	UserInterface object(mx);
	object.cases();

	system("pause");
	return 0;
}