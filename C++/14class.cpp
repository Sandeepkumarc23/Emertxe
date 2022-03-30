#include<iostream>
using namespace std;
class Base
{
	private:
		int m_private;
	protected:
		int m_protected;
	public:
		int m_public;
		Base()
		{
			m_private = 10;
			m_protected = 20;
			m_public = 30;
		}
};
class child: public Base  //public inheritance of Base class
{
	private:
		int a;
	protected:
		int b;
	public:
		child()
		{
			m_public = 100;
			//m_private = 200;  error
			m_protected = 300;
		}
		void display()
		{
			cout << "m_public = " << m_public << endl;
			cout << "m_protected = " << m_protected << endl;
		}
};
int main()
{
	Base base;
	cout << "m_public = " << base.m_public << endl;
	child ch;
	ch.display();
	cout << "Base class size = " << sizeof(Base) << endl;  //12 by
	cout << "child class size = " << sizeof(ch) << endl;  //20 by
	cout << "m_public = " << base.m_public << endl;
	return 0;
}
/*
   Base is a parent class and child is a child class which public inherited the Base class.
   Now all variables, everything in parent class is available in child class.
   Public in Base means it can be modified outside class and also in child class.
   Private in Base means, even though child class got the private var, it cannot access it as private var is available only to Base class.
   Protected in Base means, the var is accessed only in Base and child class(inherited class) and cannot be accessed elsewhere.
   The child class got everything from base and also it has it's own features which cannot be accessed by the parent class object.
   But child class object can access all var Base and child class data.
   As above u can see, int a, b belongs only to child class.
   m_public, m_private, m_protected var is in different addr for Base and different for child, so both data can differ.
   Note
   When child class object is created, 1st parent class constructor is called then child class constructor.
   Compiler behavior it is, when child class obj is created, it calls child class constructor, Line 25, from line 25, it jumps to line 11, fn defn happens first there and then goes back to line 25 and fn defn happens.
   So if we pass arg to child constructor, it is for child constructor only and not for parent constructor.
   What if parent constructor is also paremeterized constructor.
   Refer 15class.cpp
   */
