#pragma once

#include <string>
#include "Child.h";
#include <ostream>
#include <memory>;

using namespace std;

class Parent {
    public:
        Parent();
		Parent(const Parent& parent);

		friend ostream& operator << (ostream& os, const Parent& parent);

		Parent& operator=(Parent other)
		{
			std::cout << "copy assignment of Parent\n" << endl;
			
			this->name = other.name;
			delete (&this->child);
			this->child = move(other.child);


			return *this;
		}

        string name;
		unique_ptr<Child> child;
};

