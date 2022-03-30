#include<iostream>   //deep copy
using namespace std;
class Test
{
	public:
	int a, b;
	int *ptr;
	Test(int x = 0, int y = 0, int z = 0);
	Test(Test &obj);
	void print_values(void);
};
void Test::print_values()
{
	cout << "a = " << a << " b = " << b << " *ptr = " << *ptr << endl;
}
Test::Test(int l, int m, int n)
{
	a = l;
	b = m;
	ptr = new int;
	*ptr = n;
	cout << "Inside para constructor\n";
}
Test::Test(Test &obj)
{
	a = obj.a;
	b = obj.b;
	ptr = new int;
	*ptr = *obj.ptr; //Deep copy happening where data is copied, not address.Compiler copies addr, like ptr = obj.ptr
}
int main()
{
	Test obj1(1,2,3);
	Test obj2(obj1);  //copying obj1 contents to obj2
	obj1.print_values();
	obj2.print_values();
	obj1.a = 7, obj1.b = 8;
	*obj2.ptr = 10;
	obj1.print_values();
	obj2.print_values();
	return 0;
}
/*
   line 34, deep copy happens
   line 34, obj2 is calling our constructor defined in line 24.
   It copies the contents of obj1 to obj2 and if you make any changes to obj2 does not reflects to obj1 and vice versa.
   */
