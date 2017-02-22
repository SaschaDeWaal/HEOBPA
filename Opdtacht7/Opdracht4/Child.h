#pragma once

#include <iostream>
#include <string>
#include <ostream>

using namespace std;

class Child {
    public:
		Child();
        Child(string name);
		Child(const Child& child);
		Child(const Child&& other);


		friend ostream& operator << (ostream& os, const Child& child);

		Child& operator=(Child other)
		{
			std::cout << "copy assignment of Child\n" << endl;

			this->name = "copy of " + other.name;
			return *this;
		}


    private:
        string name;
};

