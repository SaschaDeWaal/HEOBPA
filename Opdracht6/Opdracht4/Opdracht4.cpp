#include "stdafx.h"
#include <iostream>
#include <string>
#include "Parent.h"

using namespace std;

int main() {

	//create shared parent
	shared_ptr<Parent>  p1 = make_shared<Parent>();
	p1->name = "parent1";
	p1->child = make_unique<Child>();

	cout << "First pointer" << *p1 << endl;

	//copy parent and show content
	shared_ptr<Parent>  p2 = p1;
	cout << "Copy of shared point: " << *p2 << endl;

	//show pointer reference 
	cout << p1 << " vs " << p2 << endl;

	//wait for exit
	int exitCode = 0;
	cin >> exitCode;
	return exitCode;
}