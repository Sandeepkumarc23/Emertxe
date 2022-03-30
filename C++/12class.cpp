#include<iostream>
using namespace std;
int main()
{
	int x = 10, y = 20;
	int &r = x;
	cout << "x = " << x << endl;
	r = 123;
	cout << "x = " << x << endl;
	return 0;
}

