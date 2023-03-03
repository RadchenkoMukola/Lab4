#ifndef INCLUDED_Mergesort_H
#define INCLUDED_Mergesort_H
#include "List.h"
#include "Vectorfunctions.h"
#include "Figurefunctions.h"
template<typename T>
Node<T>* merge(Node<T>* h1, Node<T>* h2)
{
	Node<T>* t1 = new Node<T>;
	Node<T>* t2 = new Node<T>;
	Node<T>* temp = new Node<T>;

	if (h1 == NULL)
		return h2;

	if (h2 == NULL)
		return h1;

	t1 = h1;

	while (h2 != NULL)
	{

		t2 = h2;
		h2 = h2->next;
		t2->next = NULL;


		if (h1->data > t2->data)
		{
			t2->next = h1;
			h1 = t2;
			t1 = h1;
			continue;
		}

	flag:
		if (t1->next == NULL)
		{
			t1->next = t2;
			t1 = t1->next;
		}
		else if ((t1->next)->data <= t2->data)
		{
			t1 = t1->next;
			goto flag;
		}
		else
		{

			temp = t1->next;
			t1->next = t2;
			t2->next = temp;
		}
	}


	return h1;
}


template<typename T>
void mergesortel(Node<T>** head)
{
	Node<T>* first = new Node<T>;
	Node<T>* second = new Node<T>;
	Node<T>* temp = new Node<T>;
	first = *head;
	temp = *head;

	if (first == NULL || first->next == NULL)
	{
		return;
	}
	else
	{
		while (first->next != NULL)
		{
			first = first->next;
			if (first->next != NULL)
			{
				temp = temp->next;
				first = first->next;
			}
		}
		second = temp->next;
		temp->next = NULL;
		first = *head;
	}

	mergesortel(&first);
	mergesortel(&second);

	*head = merge(first, second);
}
template<typename T>
Nodev<T>* mergevec(Nodev<T>* h1, Nodev<T>* h2)
{
	Nodev<T>* t1 = new Nodev<T>;
	Nodev<T>* t2 = new Nodev<T>;
	Nodev<T>* temp = new Nodev<T>;

	if (h1 == NULL)
		return h2;

	if (h2 == NULL)
		return h1;

	t1 = h1;

	while (h2 != NULL)
	{

		t2 = h2;
		h2 = h2->next;
		t2->next = NULL;


		if (bigger(h1->data, t2->data) == 1)
		{
			t2->next = h1;
			h1 = t2;
			t1 = h1;
			continue;
		}

	flag:
		if (t1->next == NULL)
		{
			t1->next = t2;
			t1 = t1->next;
		}
		else if (smaller((t1->next)->data, t2->data) == 1 || arequal((t1->next)->data, t2->data) == 1)
		{
			t1 = t1->next;
			goto flag;
		}
		else
		{

			temp = t1->next;
			t1->next = t2;
			t2->next = temp;
		}
	}


	return h1;
}


template<typename T>
void mergesortelvec(Nodev<T>** head)
{
	Nodev<T>* first = new Nodev<T>;
	Nodev<T>* second = new Nodev<T>;
	Nodev<T>* temp = new Nodev<T>;
	first = *head;
	temp = *head;

	if (first == NULL || first->next == NULL)
	{
		return;
	}
	else
	{
		while (first->next != NULL)
		{
			first = first->next;
			if (first->next != NULL)
			{
				temp = temp->next;
				first = first->next;
			}
		}
		second = temp->next;
		temp->next = NULL;
		first = *head;
	}

	mergesortelvec(&first);
	mergesortelvec(&second);

	*head = mergevec(first, second);
}

Nodef* mergef(Nodef* h1, Nodef* h2,int p);

void mergesortelf(Nodef** head,int p);

#endif
