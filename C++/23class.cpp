#include<iostream>
using namespace std;
class A
{
	int x, y, z;
	public:
	A():x(0), y(1), z(3){}
	friend class B;
};
class B
{
	int y;
	public:
	void fun(A &obj)
	{
		cout << obj.x << endl;
		cout << obj.y << endl;
		cout << obj.z << endl;
	}
	void fun1(A &obj)
	{
		cout << obj.x << endl;
		cout << obj.y << endl;
		cout << obj.z << endl;
	}
};
int main()
{
	A a;
	B b;
	b.fun(a);
	b.fun1(a);
	return 0;
}
/*
   class A is saying it is friend of B, means class B can access class A data members, but not directly. Using object of class A as shown in line 14.
   class B is not friend of A so class A cannot access class B data members.
   class B can access any members private public or protected by default.
*/
