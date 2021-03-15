#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#pragma pack(1)
class Integer_Numbers
{
	int x;

public:
	Integer_Numbers();
	Integer_Numbers(int);
	Integer_Numbers(const Integer_Numbers&);

	void SetX(int value) { x = value; };

	double GetX() const { return x; };

	friend ostream& operator << (ostream&, const  Integer_Numbers&);
	friend istream& operator >> (istream&, Integer_Numbers&);
	

	friend Integer_Numbers operator + (Integer_Numbers&, Integer_Numbers&);
	friend Integer_Numbers operator - (Integer_Numbers&, Integer_Numbers&);
	friend Integer_Numbers operator * (Integer_Numbers&, Integer_Numbers&);
	friend Integer_Numbers operator / (Integer_Numbers&, Integer_Numbers&);
	friend Integer_Numbers operator % (Integer_Numbers&, Integer_Numbers&);
	bool operator [] (int);
	friend Integer_Numbers operator ^ (Integer_Numbers&, Integer_Numbers&);
	bool operator ~ ();
};

