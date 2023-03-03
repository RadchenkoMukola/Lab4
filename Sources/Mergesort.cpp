#include "Mergesort.h"

Nodef* mergef(Nodef* h1, Nodef* h2,int p)
{
	Nodef* t1 = new Nodef;
	Nodef* t2 = new Nodef;
	Nodef* temp = new Nodef;

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


		if (biggerf(h1->data, t2->data, p) == 1)
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
		else if (smallerf((t1->next)->data, t2->data, p) == 1 || arequalf((t1->next)->data, t2->data, p) == 1)
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

void mergesortelf(Nodef** head,int p)
{
	Nodef* first = new Nodef;
	Nodef* second = new Nodef;
	Nodef* temp = new Nodef;
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

	mergesortelf(&first,p);
	mergesortelf(&second,p);

	*head = mergef(first, second,p);
}