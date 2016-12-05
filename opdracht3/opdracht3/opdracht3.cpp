// opdracht3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template<typename T>
T biggest(T first, T second) {
	if (first > second) return first;
	return second;
}

template<typename T>
void sort(T a[], size_t size) {
	size_t idx, pass;
	for (pass = 1; pass <= size; ++pass)
	{
		for (idx = 0; idx <= size - 2; ++idx)
		{
			if (a[idx] > a[idx + 1])
				swap(a[idx], a[idx + 1]);
		}
	}
}



int main(){
	float floats[] = {1.2, 6.4, 2.1};

	 sort(floats, 3);


	for (float i : floats) {
		//cout << biggest<int>(i, 27) << endl;
		//cout << biggest(i, 2) << endl; // type inference
		cout << i << endl;
	}


	int i = 0;
	cin >> i;

    return 0;
}

