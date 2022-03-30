#include<iostream>  
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
		Length operator +(int var)
		{
			Length obj;
			obj.feet = feet + var;
			obj.inches = inches + var;
			return obj;
		}
		Length operator +(const Length &oprd)
		{
			Length obj;
			obj.feet = feet + oprd.feet;
			obj.inches = inches + oprd.inches;
			return obj;
		}
		bool operator ==(const Length &oprd) //const bcoz i am not changing D2 value here.
		{
			if ( feet == oprd.feet && inches == oprd.inches)
				return true;
			else
				return false;
		}
};
int main()
{
	Length D1(10, 11);
    Length D2, D3;
	D3 = D1 + 5;
	D1.displayLength();
	D3.displayLength();
	D2.displayLength();
	D2 = D1 + D3;
	D2.displayLength();
	if ( D1 == D2 )
		cout << "Equal\n";
	else
		cout << "Not equal\n";
	return 0;
}
/*
I am adding 5 to the obj D3, but D1 obj value remains same.
fn call happens at 40th line and defn at 14th line.
In fn defn just feet means it is feet of D1.
Similarly if i want to add 2 objects then line 44 fn call. line 21 fn defn.
Here just feet means left operand D2's feet.
line 46 fn call of == fn(operator is fn name)
line 28 fn defn, where bool is keyword that have only true or false. Even here just feet means 1st operand i.e object D1 feet.
   */
