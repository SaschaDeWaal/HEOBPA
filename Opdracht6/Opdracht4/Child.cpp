#include "stdafx.h"
#include <string>
#include "Child.h"

Child::Child(string name) {
    this->name = name;
}

Child::Child() {
	this->name = "naamloos";
}

Child::Child(const Child& child)
{
	if (&child != this) {
		this->name = "copy of " + (child).name;
	}
}

ostream& operator << (ostream& os, const Child& child) {
	if (&child != nullptr) os << "its alive!!!";
	return os << "Child: (" << child.name << ")";
}
