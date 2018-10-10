#include "Transition.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

//transit funcs
Matrix transitionValue(Matrix object) 
{
	cout << "\nTransition with value" << endl;
	return object;
}

void transitionPointer(Matrix *pointer) 
{
	cout << "\nTransition with pointer" << endl;
}

Matrix & transitionReference(Matrix &reference) 
{
	cout << "\nTransition with reference" << endl;
	return reference;
}