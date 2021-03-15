#include "Integer_Numbers.h"
#include <iostream>

using namespace std;

Integer_Numbers::Integer_Numbers()
{
	x = 0;
}
Integer_Numbers::Integer_Numbers(int y)
{
	x = y;
}
Integer_Numbers::Integer_Numbers(const Integer_Numbers& r)
{
	x = r.x;
}
Integer_Numbers operator + (Integer_Numbers& a, Integer_Numbers& b)
{
	Integer_Numbers t(0);
	t.x = a.x + b.x;
	return t;
}
Integer_Numbers operator * (Integer_Numbers& a, Integer_Numbers& b)
{
	Integer_Numbers t(0);
	t.x = a.x * b.x;
	return t;
}
Integer_Numbers operator - (Integer_Numbers& a, Integer_Numbers& b)
{
	Integer_Numbers t(0);
	t.x = a.x - b.x;
	return t;
}
Integer_Numbers operator / (Integer_Numbers& a, Integer_Numbers& b)
{
	if (b.x)
	{
		Integer_Numbers t(0);
		t.x = a.x / b.x;
		return t;
	}
	else
	{
		cerr << "Error!" << endl;
		return -1;
	}
}
Integer_Numbers operator % (Integer_Numbers& a, Integer_Numbers& b)
{
	if (a.x)
	{
		Integer_Numbers t(0);
		t.x = a.x / b.x;
		return t;
	}
	else
	{
		cerr << "Error!" << endl;
		return -1;
	}
}
Integer_Numbers operator ^ (Integer_Numbers& a, Integer_Numbers& b)
{
	Integer_Numbers t(0);
	if (a.x == 0)
		return t;
	else
		t.x = 1;
	if (b.x == 0)
		return t;
	if (b.x > 0)
	{
		for (int i = 1; i <= b.x; i++)
			t.x / a.x;
	}
	return t;
}
bool Integer_Numbers::operator [] (int i)
{
	Integer_Numbers t(0);
	return x % i == 0;
}
bool Integer_Numbers::operator ~ ()
{
	int n = 0;
	for(int i=2;i<x/2;i++)
	{
		if (x % i == 0) { n++; }
	}
	return n == 0;
}
ostream& operator << (ostream& out, const Integer_Numbers& a)
{
	out << a.x << endl;
	return out;
}
istream& operator >> (istream& in, Integer_Numbers& a)
{
	in >> a.x;
	return in;
}
