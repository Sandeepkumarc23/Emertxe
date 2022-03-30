#include<iostream>
using namespace std;
class Test
{
   	const int a, b;
	public:
	Test ( int x, int y) : a(x), b(y) {}
	void print_values()
	{
		cout << "a = " << a << " b = " << b << endl;
	}
};
int main()
{
	Test obj1(1, 2);
	obj1.print_values();
	return 0;
}
/* line 7, initializer list is the method to avoid error while initializing the const var 
 I can pass a(1), b(4), any value i can pass.
Initializer list can also be done for any variables.
If just want to initialize, then refer line 7, just in 1 line did it
 */
