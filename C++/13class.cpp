#include<iostream>
using namespace std;
int v_swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	return 0;
}
int a_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}
int r_swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	return 0;
}
int main()
{
	int x = 10, y = 20;
	v_swap(x, y);
	cout << "After swapping x = " << x << "y = " << y << endl;
	r_swap(x, y);
	cout << "After swapping x = " << x << "y = " << y << endl;
	a_swap(&x, &y);
	cout << "After swapping x = " << x << "y = " << y << endl;
	return 0;
}
/*
   line 3 - pass by value. line 10 - pass by address. line 17 - pass by reference.
   line 11, fn call, line 3 tells it is pass by reference and not line 11.
   Without calling fn with addr, the data of x is changed.
   */
