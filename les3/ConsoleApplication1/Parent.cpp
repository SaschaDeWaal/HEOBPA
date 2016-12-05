#include "stdafx.h"
#include "Parent.h"

#include <iostream>;

using namespace std;

Parent::Parent()
{
}

Parent::Parent(const Parent & other)
{
	cout << "Parent cctor" << endl;
	this->name = other.name;
	this->child = other.child;
}


Parent::~Parent()
{
}

ostream & operator<<(ostream & os, const Parent & parent)
{
	os << "Parent: " << parent.name << " child: " << parent.child;
	return os;
}
