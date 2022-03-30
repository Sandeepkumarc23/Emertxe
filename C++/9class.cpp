#include<iostream>   //Shallow copy
using namespace std;
class Test
{
	public:
	int a, b;
	int *ptr;
	Test(int x = 0, int y = 0, int z = 0);
	void print_values(void);
};
void Test::print_values()
{
	cout << "a = " << a << " b = " << b << " *ptr = " << *ptr << endl;
}
Test::Test(int x, int y, int z)
{
	a = x;
	b = y;
	ptr = new int;
	*ptr = z;
	cout << "Inside para constructor\n";
}
int main()
{
	Test obj1(1,2,3);
	Test obj2 = obj1;  //copying obj1 contents to obj2
	obj1.print_values();
	obj2.print_values();
	*obj2.ptr = 10;
	obj1.print_values();
	obj2.print_values();
	return 0;
}
/*
   line 17, shallow copy happens. The default copy constructor is called.
   It copies the contents of obj1 to obj2 and if you make any changes to obj2 reflects to obj1 and vice versa.
   obj2 is calling copy constructor and not the constructor that we have created.
   Both objects are at same address and so having same data.
   */
