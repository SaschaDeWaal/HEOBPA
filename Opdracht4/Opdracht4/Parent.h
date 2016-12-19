#pragma once

#include <string>
#include "Child.h";
#include <ostream>

using namespace std;

class Parent {
    public:
        Parent(string name);
		Parent(const Parent& parent);

		friend ostream& operator << (ostream& os, const Parent& parent);

    private:
        string name;
		Child *child;
};

