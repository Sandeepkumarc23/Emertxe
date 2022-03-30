#include<iostream>
using namespace std;
int main()
{
	int *ptr = new int[4];
	for ( int i = 0; i < 4; i++ )
	{
		cout << ptr[i] << endl;
	}
	delete ptr;
	return 0;
}
