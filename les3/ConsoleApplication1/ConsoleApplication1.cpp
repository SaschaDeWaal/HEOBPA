// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Child.h"
#include "Parent.h"

#include <iostream>>;

int main(){
	Child child1;

	child1.name = "child 1";

	Child child2;
	child2.name = "child 2";

	Child child3;
	child3 = child1;
	cout << child3 << endl;

	//Child child4 = child1;

	Parent parent1;
	parent1.name = "para1";
	parent1.child = child1;

	cout << parent1 << endl;


	Parent parent2;
	parent2 = parent1;
	parent2.name = "para2";

	cout << parent2 << endl;

	child1.name = "nieuw name";

	cout << parent2 << endl;

	int i;
	cin >> i;

    return i;
}

