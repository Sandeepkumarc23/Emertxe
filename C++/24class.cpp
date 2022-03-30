#include<iostream>
using namespace std;
class A
{
	int x, y, z;
	public:
	A():x(0), y(1), z(3){}
	friend void fun(A &);
};
void fun(A &obj)
{
	cout << obj.x << endl;
	cout << obj.y << endl;
	cout << obj.z << endl;
}
int main()
{
	A a;
	B b;
	fun(a);
	return 0;
}
/*
   This is the example of friend function
   line 8, only fun function access all the members of class A.
*/
