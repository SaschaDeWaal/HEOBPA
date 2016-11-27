// les2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Config.h"
#include <iostream>;

using namespace std;

int main(){
	Config config = Config("simple");
	config.put("key1", "value 1");
	config.put("key2", "value 2");

	cout << config["key1"] << "\n";
	cout << config["key2"] << "\n";
	cout << config["key3"] << "\n";

	cout << config << "\n";

	int i = 0;
	cin >> i;

    return 0;
}

