#include<iostream>
using namespace std;
template <class T, class U>
T add(T a, U b)
{
	return a+b;
}
int main()
{
	string s1 = "Hello";
	string s2 = "world";
	cout << add(10, 11) << endl;
	cout << add(10.5, 1.2) << endl;
	cout << add(s1, s2) << endl;
	cout << add(10.5, 22) << endl;
	return 0;
}
/*
   line 3, template decln with identifier as T, u can take any var.
   line 4, fn template defn, fn name is add, return type is T
   and taking 2 args of T type.
   line 12 - T is replaced with int and fn defn is done.
   Similarly happens for double and string. So 3 times fn defn with different datatype is done by the compiler itself.
   If the arguments are 2 different types then we need to add another identifier as shown in line 3.
   */
