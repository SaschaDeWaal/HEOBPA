#include <iostream>
#include <string>
#include "stdafx.h"
#include "Child.h"

#include "Parent.h"


Parent::Parent() {

}

Parent::Parent(const Parent& parent){
	if (this != &parent) {
		Child newChild = *parent.child;

		this->name = "copy of " + parent.name;

		if (this->child != nullptr) {
			delete (&this->child);
		}

		this->child = make_unique<Child>(newChild);
	}
}



ostream& operator << (ostream& os, const Parent& parent) {
	return os << "Parent (name = " << parent.name << " Child = " << *(parent.child) << ")";
}