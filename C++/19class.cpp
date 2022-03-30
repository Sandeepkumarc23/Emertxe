#include<iostream>
using namespace std;
template <typename T>
T Max (T a, T b)
{
	return b < a ? a : b;
}
int main()
{
	cout << Max(10, 20) << endl;
	cout << Max(33.5, 20.5) << endl;
	cout << Max(3.5f, 10.2f) << endl;
	cout << Max('A', 'B') << endl;
	cout << Max('z', 'y') << endl;
	cout << max(10, 35) << endl;
	cout << min(10, 35) << endl;
	return 0;
}
/*
   Generic fn to find the largest value among 2 values.
   line 15 and 16 are standard tenplate library functions.
   */
