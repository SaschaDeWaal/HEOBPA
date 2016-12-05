#pragma once

#include "Child.h"
#include <ostream>;
#include <string>

using namespace std;


class Parent
{
public:
	Parent();
	Parent(const Parent& other);

	~Parent();

	Child child;
	string name;

	friend ostream& operator<<(ostream& os, const Parent& parent);


};

