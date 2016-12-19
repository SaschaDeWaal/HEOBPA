#include "stdafx.h"
#include <vector>;

#pragma once
template<typename T>
class LIFO{
public:
	LIFO();
	void push(T el);
	void pop();
	T peek();

private:
	std::vector<T> typeList = vector<T>();

};

template<typename T>
T LIFO<T>::peek()
{
	return typeList[typeList.size()-1];
}

template<typename T>
void LIFO<T>::pop()
{
	typeList.pop_back();
}

template<typename T>
void LIFO<T>::push(T el)
{
	typeList.push_back(el);
}


template<typename T>
LIFO<T>::LIFO()
{

}