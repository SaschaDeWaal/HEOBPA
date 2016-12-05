#include "stdafx.h"
#include "Child.h"
#include <ostream>;
#include <iostream>;

using namespace std;

Child::Child(){
	cout << "ctor" << endl;
}

Child & Child::operator=(const Child & rhs)
{
	cout << "cctor" << endl;
	this->name = rhs.name;
	return *this;
}

ostream & operator<<(ostream & os, const Child & child)
{
	os << "Child: " << child.name << endl;
	return os;
}
