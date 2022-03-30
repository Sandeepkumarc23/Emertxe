#include<iostream>
using namespace std;
namespace global
{
	double x = 15.5;
}
namespace MyGlobal
{
	string x = "Sandy";
	int y = 10;
	int fun()
	{
		cout << "Fun from global namespace\n";
		return 0;
	}
}
int fun()
{
	cout << "fun from outside namespace\n";
	return 0;
}
namespace global
{
	void fun()
	{
		cout << "fun from extended global namespace\n";
	}
	namespace inside
	{
		void fun()
		{
			cout << "fun from extended global inside namespace\n";
		}
	}
}
int main()
{
	int x = 10;
	cout << x << endl;
	cout << global::x << endl; 
	cout << MyGlobal::x << endl;
	cout << MyGlobal::y << endl;
	fun();
	MyGlobal::fun();
	global::fun();
	global::inside::fun();
	return 0;
}
/*
   line 39 prints 15.5
   This is how to avoid naming conflicts.
   I can have any number of members inside namespace.
   Same applies for functions as well.
   Line 43 to 46 fn call of outside and inside namespace respectively.
   Line 22 to 35 is extended defn of global namespace. It is possible to do that. Suppose if i forgot to add elements in first defn then i can do like this.
   This defn element fun() will be added at the same place inside global namespace.
   We can also do the same way to std predefined namespace.
   We can also have nested namespace and to call it we use 2 times :: as u can see in line 46.
   */
