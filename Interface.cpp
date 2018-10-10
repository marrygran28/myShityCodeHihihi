#include "Interface.h"
#include "Matrix.h"
#include "Transition.h"
#include <iostream>

using namespace std;

enum 
{
	CHANGE = 1, SHOW, COPY, TRANSITION, SORT
};

UserInterface::UserInterface(Matrix matrix) : m(matrix)
{
}


UserInterface::~UserInterface()
{
}


void UserInterface::options()
{
	cout << "OPTIONS:" << endl;
	cout << "1. Change matrix" << endl;
	cout << "2. Show matrix" << endl;
	cout << "3. Creat a copy of object" << endl;
	cout << "4. Check transition" << endl;
	cout << "5. Sorting" << endl;
	cout << "Press another key for exit\n" << endl;
	cout << "Enter the option" << endl;
}


void UserInterface::cases()
{
	while (true)
	{
		options();
		int n;
		cin >> n;
		switch (n)
		{
			case CHANGE:
			{
				m.changeArray();
				break;
			}
			case SHOW:
			{
				m.show();
				break;
			}
			case COPY:
			{
				Matrix copy(m);
				copy.show();
				break;
			}
			case TRANSITION:
			{
				transitionValue(m);
				m.show();
		
				transitionPointer(&m);
				m.show();

				Matrix &reference = m;
				transitionReference(reference);
				m.show();
				break;
			}
			case SORT:	//decrease
			{
				m.sort();
				m.show();	
				break;
			}
			default: return;
		}
		system("pause");
		system("CLS");
	}
}