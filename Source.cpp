#include <iostream>
#include "Integer_Numbers.h"

using namespace std;

int main()
{
	Integer_Numbers a, b;
	cout << "a=? "; cin >> a;
	cout << "b=? "; cin >> b;
	cout << endl;
	cout << "a+b=" << a + b;
	cout << "a-b=" << a - b;
	cout << "a*b=" << a * b;
	cout << "a/b=" << a / b;
	cout << "a%b=" << a % b;
	cout << "a^b=" << (a ^ b) << endl;
	if (~a)
		cout << "a - prime number" << endl;
	else
		cout<< "a - not prime number" << endl;
	if (a[2])
		cout << "a - even number" << endl;
	else
		cout << "a - not even number" << endl;
	return 0;
}