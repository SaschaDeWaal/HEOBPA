#include "stdafx.h"

#include "Child.h"

Child::Child(string name) {
    this->name = name;
}

ostream& operator << (ostream& os, const Child& child) {
	return os << "Child: (" << child.name << ")";
}
