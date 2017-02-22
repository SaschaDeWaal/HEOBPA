#include <iostream>
#include <string>
#include "stdafx.h"
#include "Child.h"

#include "Parent.h"


Parent::Parent() {
	cout << "> Empty Constructor" << endl;
}

Parent::Parent(const Parent& parent){
	cout << "> Copy Constructor" << endl;

	if (this != &parent) {
		Child newChild = *parent.child;

		this->name = "copy of " + parent.name;

		if (this->child != nullptr) {
			delete (&this->child);
		}

		this->child = make_unique<Child>(newChild);
	}
}

Parent::Parent(Parent&& other) {
	cout << "> Move contructor of Parent!!" << endl;

	this->name = move(other.name);
	this->child = move(other.child);

}

ostream& operator << (ostream& os, const Parent& parent) {
	return os << "Parent (name = " << parent.name << " Child = " << *(parent.child) << ")";
}