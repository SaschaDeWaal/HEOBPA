#include <iostream>
#include <string>
#include "stdafx.h"
#include "Child.h"

#include "Parent.h"


Parent::Parent(string name) {
    this->name = name;
	this->child = new Child("child of " + name);
}


Parent::Parent(const Parent& parent){
	if (this != &parent) {
		this->name = "copy of " + parent.name;
		this->child = parent.child;
	}
}

ostream& operator << (ostream& os, const Parent& parent) {
	return os << "Parent (name = " << parent.name << " Child = " << *(parent.child) << ")";
}