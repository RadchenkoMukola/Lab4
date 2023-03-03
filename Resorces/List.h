#ifndef INCLUDED_List_H
#define INCLUDED_List_H

#include "Figure.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
struct Node
{
	T  data;
	Node<T>* next;
};
template<typename T>
struct Nodev
{
	vector<T> data;
	Nodev<T>* next;
};


struct Nodef
{
	Figure*  data;
	Nodef* next;
};


#endif