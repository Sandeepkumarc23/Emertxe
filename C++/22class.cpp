#include<iostream>
using namespace std;
int main()
{
	int a, b; double c, d;
	cout << "Enter two int values: ";
	cin >> a >> b;
	cout << "Enter two double values: ";
	cin >> c >> d;
	try
	{
		if ( b == 0 )
			throw b;
		if ( d == 0 )
			throw d;
	}
	catch ( int x)
	{
		cout << "Caught divide by zero error for int" << " b: " << x << endl;
		exit(0);  //or return -1;
	}
	catch ( double x)
	{
		cout << "Caught divide by zero error for double" << " d: " << x << endl;
		exit(0);  //or return -1;
	}
	catch (...)
	{
		cout << "Caught divide by zero error" << endl;
		return -1;
	}
	cout << "Res = " << a / b << endl;
	cout << "Res = " << c / d << endl;
	return 0;
}
/*
   line 27 - default catch can access the value of a,b,c and d directly here.
   */
