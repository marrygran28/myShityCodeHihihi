#pragma once
#include "Matrix.h"

class UserInterface
{
public:
	UserInterface() {}
	UserInterface(Matrix matrix);
	~UserInterface();
	void options();
	void cases();
private:
	Matrix m;
};

