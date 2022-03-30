#include<iostream>
using namespace std;
class parent
{
	public:
		int a, b;
	private:
		int c, d;
	public:
		int e, f;
		parent(int n1, int n2)
		{
			a = n1, b = n2;
			cout << "From parent class\n";
		}
};
class child:public parent
{
	private:
		int g;
	protected:
		int h;
	public:
		child(int n1, int n2, int n3, int n4): parent(n3, n4), g(n1), h(n2)
	    {
	    	cout << "From child class\n";
	    }
		void display()
		{
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			cout << "g = " << g << endl;
			cout << "h = " << h << endl;
		}
};
int main()
{
	parent p1(22, 23);
	cout << "a and b values are " << p1.a << ", " << p1.b << endl;
	child ch1(1,2,3,4);  //This calls 2 constructors(parent and child).
	ch1.display();
	return 0;
}
/*
   If parent constructor is parameterized then while creating child object, make sure to pass enough arguments which is equal to sum of parent and child arguments.
   Then in child constructor defn, i have to use initializer list as shown in line 24 which calls constructor with args and also i have initialized values of g and h var using initializer list technique.
   line 39 is the p1 object with parent class which got values for a and b as 22 and 23, whereas child class obj ch1 got a and b values as 3 and 4.
   */
