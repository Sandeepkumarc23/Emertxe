#include<iostream>   //unary operators overloading
using namespace std;
class Length
{
	private:
		int feet;
		int inches;
	public:
		Length(int f = 0, int i = 0) : feet(f), inches(i) {}
		void displayLength()
		{
			cout << "F: " << feet << " I: " << inches << endl;
		}
		Length operator ++()  //pre inc ++p
		{
			Length obj;
			obj.feet = ++feet;
			obj.inches = ++inches;
			return obj;
		}
		Length operator ++(int)  //post inc p++, here (int) represents it is a post inc and it is not saying it is a datatype.
		{
			Length obj1;
			obj1.feet = feet++;
			obj1.inches = inches++;
			return obj1;
		} 
};
int main()
{
	Length D1(10, 11);
	D1.displayLength();
    Length D2;	
	D2 = D1++;
	D1.displayLength();
	D2.displayLength();
	return 0;
}
/*
   32, calls fn in line 14, so there has to be fn defn in class to do operator overloading.
   line 14, operator is a keyword with return type and operator to overload and then empty arg.
   Here ++D1 means it's variables feet and inches have to be inc by 1, so like that fn defn.
   similar to above pre and post inc fn defn u can do for - as well.
   Line 14 acts same as below.
   int x = 10, y = 11;
   x = ++y;  means x = 12 and also y = 12.
   So there ++feet and ++inches is incrementing values for D1 and also assigned same to D2.
   */
