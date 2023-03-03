#include "Figurefunctions.h"

bool biggerf(Figure* A, Figure* B, int p)
{
	bool ans = false;
	if (p == 1)
	{
		double s1 = A->calc_area();
		double s2 = B->calc_area();

		if (s1 > s2)
		{
			ans = true;
		}
		return ans;
	}
	else if (p == 2)
	{
		double s1 = A->calc_perimeter();
		double s2 = B->calc_perimeter();

		if (s1 > s2)
		{
			ans = true;
		}
		return ans;
	}
	else return 0;
}

bool smallerf(Figure* A, Figure* B, int p)
{
	bool ans = false;
	if (p == 1)
	{
		double s1 = A->calc_area();
		double s2 = B->calc_area();

		if (s1 < s2)
		{
			ans = true;
		}
		return ans;
	}
	else if (p == 2)
	{
		double s1 = A->calc_perimeter();
		double s2 = B->calc_perimeter();

		if (s1 < s2)
		{
			ans = true;
		}
		return ans;
	}
	else return 0;
}

bool arequalf(Figure* A, Figure* B, int p)
{
	bool ans = false;
	if (p == 1)
	{
		double s1 = A->calc_area();
		double s2 = B->calc_area();

		if (s1 == s2)
		{
			ans = true;
		}
		return ans;
	}
	else if (p == 2)
	{
		double s1 = A->calc_perimeter();
		double s2 = B->calc_perimeter();

		if (s1 == s2)
		{
			ans = true;
		}
		return ans;
	}
	else return 0;
}
