#include<iostream>
using namespace std;
float add(int n1, int n2, int n3)
{
	return n1+n2+n3;
}
int add(int n1, int n2)
{
	return n1+n2;
}
double add(double n1, double n2)
{
	return n1+n2;
}
string add(string n1, string n2)
{
	return n1+n2;
}
int main()
{
	cout << add(5, 10) << endl;
	cout << add(1, 2, 3) << endl;
	cout << add(5.5, 10.6) << endl;
	cout << add("Hello", "world") << endl;
	return 0;
}
/*
   line 13: To join 2 strings, "+" for string operand concatenates 2 strings.
   Based on argument type, the fn call links with the fn defn.
   line 17 links with line 3, line 18 -> line 7 and line 19 -> line 11.
   in line 18, what if i pass 5.5f and 10.6f, then type promotion happens and 5.5f of 4 bytes data gets stored in 8 bytes of double, so it is calling fn in line 7.
   If i pass (5.5, "Hello"), this gives me an error.No matching definition.

   */
