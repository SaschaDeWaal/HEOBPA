#pragma once

#include <string>
#include "Child.h";
#include <ostream>

using namespace std;

class Parent {
    public:
        Parent();
		Parent(const Parent& parent);

		friend ostream& operator << (ostream& os, const Parent& parent);

		Parent& operator=(Parent other)
		{
			std::cout << "copy assignment of Parent\n" << endl;
			
			delete (this->child);
			this->child = new Child("new");

			this->name = other.name;
			*(this->child) = *(other.child);


			return *this;
		}

        string name;
		Child *child;
};

