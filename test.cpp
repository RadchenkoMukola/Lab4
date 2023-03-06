#include <string.h>
#include "pch.h"
#include "../ООП Лаба1/Figure.h"
#include "../ООП Лаба1/Figurefunctions.h"
#include "../ООП Лаба1/Figurefunctions.cpp"
#include "../ООП Лаба1/Parallelogram.h"
#include "../ООП Лаба1/Parallelogram.cpp"
#include "../ООП Лаба1/Triangle.h"
#include "../ООП Лаба1/Triangle.cpp"
#include "../ООП Лаба1/Additionalfunc1.h"
#include "../ООП Лаба1/Additionalfunc1.cpp"
#include "../ООП Лаба1/Additionalfunc2.h"
#include "../ООП Лаба1/Additionalfunc2.cpp"
#include "../ООП Лаба1/Pkutnuk.h"
#include "../ООП Лаба1/Pkutnuk.cpp"
#include "../ООП Лаба1/Circle.h"
#include "../ООП Лаба1/Circle.cpp"
#include "../ООП Лаба1/Vectorfunctions.h"
#include "../ООП Лаба1/Quicksort.h"
#include "../ООП Лаба1/Quicksort.cpp"
#include "../ООП Лаба1/List.h"
#include "../ООП Лаба1/Mergesort.h"
#include "../ООП Лаба1/Mergesort.cpp"
#include "../ООП Лаба1/Insertionsort.h"
#include "../ООП Лаба1/Insertionsort.cpp"
#include "../ООП Лаба1/Listfunctions.h"
#include "../ООП Лаба1/Listfunctions.cpp"
TEST(Parallelogramtest, TestName) {
	Parallelogram x (0,5,5,5,5,0,0,0);
  double s = x.calc_area();
  double p = x.calc_perimeter();

  string t = x.calc_type();

  vector<double> sp = x.calc_specdot();

  string v = x.calc_vyp();

  EXPECT_EQ(s,25);
  EXPECT_TRUE(true);

  EXPECT_EQ(p, 20);
  EXPECT_TRUE(true);

  string y = "Прямокутник";
  ASSERT_EQ(t.size(), y.size());

  vector<double> td;
  td.push_back(2.5);
  td.push_back(2.5);

  for (int i = 0; i < sp.size(); i++)
  {
	  EXPECT_EQ(sp[i], td[i]);
  }

  string op = "Опуклий";
  ASSERT_EQ(v.size(), op.size());
}

TEST(Triangletest, TestName) {
	Triangle x(0,0,0,7,8,0);
	double s = x.calc_area();
	int p = x.calc_perimeter();

	string t = x.calc_type();

	vector<double> sp = x.calc_specdot();

	string v = x.calc_vyp();

	EXPECT_EQ(s, 28);
	EXPECT_TRUE(true);

	EXPECT_EQ(p, 25);
	EXPECT_TRUE(true);

	string y = "Різностороній";
	
	ASSERT_EQ(t.size(), y.size());
	for (int i = 0; i < sp.size(); i++)
	{
		EXPECT_EQ(t[i],y[i]);
	}

	vector<double> td;
	td.push_back(4);
	td.push_back(3.5);

	for (int i = 0; i < sp.size(); i++)
	{
		EXPECT_EQ(sp[i], td[i]);
	}

	string op = "Опуклий";
	ASSERT_EQ(v.size(), op.size());
}

TEST(Pentagontest, TestName) {
	Pkutnuk x(0, 0,-3,2,1,4,5,2,3,0);
	double s = x.calc_area();
	int p = x.calc_perimeter();

	string t = x.calc_type();

	vector<double> sp = x.calc_specdot();

	string v = x.calc_vyp();

	EXPECT_EQ(s, 19);
	EXPECT_TRUE(true);

	EXPECT_EQ(p, 18);
	EXPECT_TRUE(true);

	string y = "П'ятикутник";
	ASSERT_EQ(t.size(), y.size());

	vector<double> td;
	td.push_back(1.2);
	td.push_back(1.6);

	for (int i = 0; i < sp.size(); i++)
	{
		EXPECT_EQ(sp[i], td[i]);
	}

	string op = "Опуклий";
	ASSERT_EQ(v.size(), op.size());
}
TEST(Circletest, TestName) {
	Circle x(0,0,5);
	int s = x.calc_area();
	int p = x.calc_perimeter();

	string t = x.calc_type();

	vector<double> sp = x.calc_specdot();

	string v = x.calc_vyp();
	
	EXPECT_EQ(s, 78);
	EXPECT_TRUE(true);

	EXPECT_EQ(p, 31);
	EXPECT_TRUE(true);

	string y = "Коло";
	ASSERT_EQ(t.size(), y.size());

	vector<double> td;
	td.push_back(0);
	td.push_back(0);

	for (int i = 0; i < sp.size(); i++)
	{
		EXPECT_EQ(sp[i], td[i]);
	}

	string op = "Опуклий";
	ASSERT_EQ(v.size(), op.size());
}
TEST(Vectortest1, TestName) {

	vector<int> a;
	vector<int> b;
	a.push_back(2);
	a.push_back(3);
	a.push_back(7);
	a.push_back(5);
	a.push_back(4);

	b.push_back(1);
	b.push_back(1);
	b.push_back(1);
	b.push_back(1);

	bool ans = bigger(a, b);

	EXPECT_EQ(ans, 1);
}

TEST(Vectortest2, TestName) {

	vector<string> a;
	vector<string> b;
	a.push_back("a");
	a.push_back("e");
	a.push_back("6");
	a.push_back("5");
	a.push_back("ddfe");

	b.push_back("a");
	b.push_back("bdd");
	b.push_back("asdasd");
	b.push_back("dode ot herman");
	b.push_back("dode ot herman");
	b.push_back("dode ot herman");

	bool ans = smaller(a, b);

	EXPECT_EQ(ans, 1);
}

TEST(Vectortest3, TestName) {

	vector<double> a;
	vector<double> b;
	a.push_back(145.4);
	a.push_back(0);
	a.push_back(1/3);
	a.push_back(11/6);
	a.push_back(-200);
	a.push_back(-200);

	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	b.push_back(4);
	b.push_back(5);
	b.push_back(6);

	bool ans = arequal(a, b);

	EXPECT_EQ(ans, 0);
}

TEST(Reversetest1, TestName) {

	struct Node<int>* head = NULL;

	Npush_back(&head, 1);
	Npush_back(&head, 4);
	Npush_back(&head, 5);
	Npush_back(&head, 3);
	Npush_back(&head, 2);

	struct Node<int>* rev = reverse(head);

	struct Node<int>* ans = NULL;

	Npush_back(&head, 2);
	Npush_back(&head, 3);
	Npush_back(&head, 5);
	Npush_back(&head, 4);
	Npush_back(&head, 1);

	bool b = true;

	while (rev != NULL && ans != NULL) {
		if (head->data != ans->data)
			b = false;
		head = head->next;
		ans = ans->next;
	}

	EXPECT_EQ(b, 1);

}
TEST(Reversetest2, TestName) {



	Figure* a, * b, * c, * d;

	struct Nodef* head = NULL;

	a = new Parallelogram(0, 0, 0, 5, 5, 5, 5, 0);
	b = new Triangle(0, 0, 0, 7, 8, 0);
	c = new Circle(0, 1, 7);
	d = new Pkutnuk(0, 0, -2, 3, 3, 3, 4, 5, 2, 2);

	Npush_backf(&head, a);
	Npush_backf(&head, d);
	Npush_backf(&head, c);
	Npush_backf(&head, b);

	struct Nodef* ans = NULL;

	Npush_backf(&ans, b);
	Npush_backf(&ans, c);
	Npush_backf(&ans, d);
	Npush_backf(&ans, a);

	struct Nodef* rev = reversef(head);

	bool bob = true;
	while (rev != NULL && ans != NULL) {

		if (arequalf(rev->data, ans->data, 1) == 0 || (arequalf(rev->data, ans->data, 2) == 0)) bob = false;

		rev = rev->next;
		ans = ans->next;
	}

	EXPECT_EQ(bob, 1);

}

TEST(Reversetest3, TestName) {

	struct Nodev<int>* head = NULL;

	vector<int> a, b, c, d;

	a.push_back(1);
	b.push_back(4);
	c.push_back(3);
	d.push_back(2);

	Npush_backv(&head, a);
	Npush_backv(&head, b);
	Npush_backv(&head, c);
	Npush_backv(&head, d);
	struct Nodev<int>* rev = reversev(head);


	struct Nodev<int>* ans = NULL;

	Npush_backv(&ans, d);
	Npush_backv(&ans, c);
	Npush_backv(&ans, b);
	Npush_backv(&ans, a);


	bool bob = true;

	while (rev != NULL && ans != NULL) {
		vector<int> ch1 = rev->data;
		vector<int> ch2 = ans->data;
		for (int i = 0; i <a.size(); i++)
		{
			if(ch1[i] != ch2[i]) bob = false;
		}
		
		rev = rev->next;
		ans = ans->next;
	}

	EXPECT_EQ(bob, 1);

}

TEST(Biggerf1test1, TestName) {
	Figure* a, * b;
	a = new Triangle(0, 0, 0, 7, 8, 0);
	b = new Circle(0, 1, 7);

	bool bob = biggerf(b,a,1);



	

	EXPECT_EQ(bob, 1);

}
TEST(Biggerf1test2, TestName) {
	Figure* a, * b;
	a = new Triangle(0, 0, 0, 7, 8, 0);
	b = new Circle(0, 1, 7);

	bool bob = biggerf(b, a, 2);


	EXPECT_EQ(bob, 1);

}
TEST(Smallerf1test1, TestName) {
	Figure* a, * b;
	a = new Parallelogram(0, 0, 0, 5, 5, 5, 5, 0);
	b = new Triangle(0, 0, 0, 7, 8, 0);

	bool bob = smallerf(a,b, 1);



	EXPECT_EQ(bob, 1);

}
TEST(Smallerf1test2, TestName) {
	Figure* a, * b;
	a = new Parallelogram(0, 0, 0, 5, 5, 5, 5, 0);
	b = new Triangle(0, 0, 0, 7, 8, 0);

	bool bob = smallerf(a,b, 2);


	EXPECT_EQ(bob, 1);

}
TEST(Areequalf1test1, TestName) {
	Figure* a, * b;
	a = new Parallelogram(0, 0, 0, 5, 5, 5, 5, 0);
	b = new Triangle(0, 0, 0, 5, 10, 0);

	bool bob = arequalf(a, b, 1);



	EXPECT_EQ(bob, 1);

}
TEST(Areequalf1test2, TestName) {
	Figure* a, * b;
	a = new Parallelogram(0, 0, 0, 5, 5, 5, 5, 0);
	b = new Parallelogram(0, 0, 0, 8, 2, 8, 2, 0);

	bool bob = arequalf(a, b, 2);


	EXPECT_EQ(bob, 1);

}
TEST(Quicksorttest1, TestName) {

	struct Node<int>* head = NULL;

	Npush_back(&head,1);
	Npush_back(&head, 4);
	Npush_back(&head, 5);
	Npush_back(&head, 3);
	Npush_back(&head, 2);

	struct Node<int>* ans = NULL;
	Npush_back(&ans, 1);
	Npush_back(&ans, 2);
	Npush_back(&ans, 3);
	Npush_back(&ans, 4);
	Npush_back(&ans, 5);

	quicksortel<int>(head);

	bool b = true;
	
	while (head != NULL && ans != NULL) {
		if (head->data != ans->data)
			b = false;
		head = head->next;
		ans = ans->next;
	}
	
	EXPECT_EQ(b,1);
	
}

TEST(Quicksorttest2, TestName) {



	Figure* a, * b, * c, * d;

	struct Nodef* head = NULL;

	a = new Parallelogram(0, 0, 0, 5, 5, 5, 5, 0);
	b = new Triangle(0, 0, 0, 7, 8, 0);
	c = new Circle(0, 1, 7);
	d = new Pkutnuk(0, 0, -2, 3, 3, 3, 4, 5, 2, 2);

	Npush_backf(&head, a);
	Npush_backf(&head, d);
	Npush_backf(&head, c);
	Npush_backf(&head, b);

	struct Nodef* ans = NULL;

	Npush_backf(&ans,d);
	Npush_backf(&ans, a);
	Npush_backf(&ans, b);
	Npush_backf(&ans, c);

	quicksortelf(head,1);

	bool bob = true;
	while (head != NULL && ans != NULL) {

		if (arequalf(head->data, ans->data, 1) == 0 || (arequalf(head->data, ans->data, 2) == 0)) bob = false;

		head = head->next;
		ans = ans->next;
	}

	EXPECT_EQ(bob, 1);

}

TEST(Quicksorttest3, TestName) {

	struct Nodev<int>* head = NULL;

	vector<int> a, b, c, d;

	a.push_back(1);
	b.push_back(4);
	c.push_back(3);
	d.push_back(2);

	Npush_backv(&head, a);
	Npush_backv(&head, b);
	Npush_backv(&head, c);
	Npush_backv(&head, d);
	quicksortelvec(head);


	struct Nodev<int>* ans = NULL;

	Npush_backv(&ans, a);
	Npush_backv(&ans, d);
	Npush_backv(&ans, c);
	Npush_backv(&ans, b);


	bool bob = true;

	while (head != NULL && ans != NULL) {
		vector<int> ch1 = head->data;
		vector<int> ch2 = ans->data;
		for (int i = 0; i < a.size(); i++)
		{
			if (ch1[i] != ch2[i]) bob = false;
		}

		head = head->next;
		ans = ans->next;
	}

	EXPECT_EQ(bob, 1);

}
TEST(Mergesorttest1, TestName) {

	struct Node<double>* head = NULL;

	Npush_back(&head, 1.2);
	Npush_back(&head, 4.5);
	Npush_back(&head, 5.3);
	Npush_back(&head, 3.3);
	Npush_back(&head, 2.5);

	struct Node<double>* ans = NULL;
	Npush_back(&ans, 5.3);
	Npush_back(&ans, 4.5);
	Npush_back(&ans, 3.3);
	Npush_back(&ans, 2.5);
	Npush_back(&ans, 1.2);

	mergesortel<double>(&head);

	bool b = true;

	while (head != NULL && ans != NULL) {
		if (head->data != ans->data)
			b = false;
		head = head->next;
		ans = ans->next;
	}

	EXPECT_EQ(b, 1);

}
TEST(Mergesorttest2,TestName) {



	Figure* a, * b, * c, * d;

	struct Nodef* head = NULL;

	a = new Parallelogram(0, 0, 0, 5, 5, 5, 5, 0);
	b = new Triangle(0, 0, 0, 7, 8, 0);
	c = new Circle(0, 1, 7);
	d = new Pkutnuk(0, 0, -2, 3, 3, 3, 4, 5, 2, 2);

	Npush_backf(&head, a);
	Npush_backf(&head, d);
	Npush_backf(&head, c);
	Npush_backf(&head, b);

	struct Nodef* ans = NULL;

	Npush_backf(&ans, d);
	Npush_backf(&ans, a);
	Npush_backf(&ans, b);
	Npush_backf(&ans, c);

	mergesortelf(&head, 1);

	struct Nodef* rev = reversef(head);

	bool bob = true;
	while (rev != NULL && ans != NULL) {

		if (arequalf(rev->data, ans->data, 1) == 0 || (arequalf(rev->data, ans->data, 2) == 0)) bob = false;
		rev = rev->next;
		ans = ans->next;
	}

	EXPECT_EQ(bob, 1);

}
TEST(Mergesorttest3, TestName) {

	struct Nodev<double>* head = NULL;

	vector<double> a, b, c, d;

	a.push_back(1.1);
	b.push_back(4.2);
	c.push_back(3.5);
	d.push_back(2.7);

	Npush_backv(&head, a);
	Npush_backv(&head, b);
	Npush_backv(&head, c);
	Npush_backv(&head, d);

	mergesortelvec(&head);


	struct Nodev<double>* ans = NULL;

	Npush_backv(&ans, a);
	Npush_backv(&ans, d);
	Npush_backv(&ans, c);
	Npush_backv(&ans, b);
	struct Nodev<double>* ans2 = reversev(ans);


	bool bob = true;

	while (head != NULL && ans2 != NULL) {
		vector<double> ch1 = head->data;
		vector<double> ch2 = ans2->data;
		for (int i = 0; i < a.size(); i++)
		{
			if (ch1[i] != ch2[i]) bob = false;
		}

		head = head->next;
		ans2 = ans2->next;
	}

	EXPECT_EQ(bob, 1);

}
TEST(Insertionsorttest1, TestName) {

	struct Node<double>* head = NULL;

	Npush_back(&head, 1.2);
	Npush_back(&head, 4.5);
	Npush_back(&head, 5.3);
	Npush_back(&head, 3.3);
	Npush_back(&head, 2.5);

	struct Node<double>* ans = NULL;
	Npush_back(&ans, 5.3);
	Npush_back(&ans, 4.5);
	Npush_back(&ans, 3.3);
	Npush_back(&ans, 2.5);
	Npush_back(&ans, 1.2);

	insertionsortel<double>(&head);

	bool b = true;

	while (head != NULL && ans != NULL) {
		if (head->data != ans->data)
			b = false;
		head = head->next;
		ans = ans->next;
	}

	EXPECT_EQ(b, 1);

}
TEST(Insertionsorttest2, TestName) {



	Figure* a, * b, * c, * d;

	struct Nodef* head = NULL;

	a = new Parallelogram(0, 0, 0, 5, 5, 5, 5, 0);
	b = new Triangle(0, 0, 0, 7, 8, 0);
	c = new Circle(0, 1, 7);
	d = new Pkutnuk(0, 0, -2, 3, 3, 3, 4, 5, 2, 2);

	Npush_backf(&head, a);
	Npush_backf(&head, d);
	Npush_backf(&head, c);
	Npush_backf(&head, b);

	struct Nodef* ans = NULL;

	Npush_backf(&ans, d);
	Npush_backf(&ans, a);
	Npush_backf(&ans, b);
	Npush_backf(&ans, c);

	insertionsortelf(&head, 1);

	struct Nodef* rev = reversef(head);

	bool bob = true;
	while (rev != NULL && ans != NULL) {

		if (arequalf(rev->data, ans->data, 1) == 0 || (arequalf(rev->data, ans->data, 2) == 0)) bob = false;
		rev = rev->next;
		ans = ans->next;
	}

	EXPECT_EQ(bob, 1);

}
TEST(Insertionsorttest3, TestName) {

	struct Nodev<double>* head = NULL;

	vector<double> a, b, c, d;

	a.push_back(1.1);
	b.push_back(4.2);
	c.push_back(3.5);
	d.push_back(2.7);

	Npush_backv(&head, a);
	Npush_backv(&head, b);
	Npush_backv(&head, c);
	Npush_backv(&head, d);

	insertionsortelvec(&head);


	struct Nodev<double>* ans = NULL;

	Npush_backv(&ans, a);
	Npush_backv(&ans, d);
	Npush_backv(&ans, c);
	Npush_backv(&ans, b);
	struct Nodev<double>* ans2 = reversev(ans);


	bool bob = true;

	while (head != NULL && ans2 != NULL) {
		vector<double> ch1 = head->data;
		vector<double> ch2 = ans2->data;
		for (int i = 0; i < a.size(); i++)
		{
			if (ch1[i] != ch2[i]) bob = false;
		}

		head = head->next;
		ans2 = ans2->next;
	}

	EXPECT_EQ(bob, 1);

}
