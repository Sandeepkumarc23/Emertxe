#include<iostream>
using namespace std;
class Account
{
	string Name;
    long unsigned accNumber;
	double balance;
	public:
	Account(string name, long unsigned accno, double bal);
	void print_details(void);  //fn prototype of class to make class defn small.
};
void Account::print_details()  //this is how fn defn done of class Account outside class.
{
	cout << "Account name is " << Name << endl;
	cout << "Account number is " << accNumber << endl;
	cout << "Account balance is " << balance << endl;
}
Account::Account(string name = "Nobody", long unsigned accno = 757575, double bal = 30000000000)
{
	Name = name;
	accNumber = accno;
	balance = bal;
}
int main()
{
	Account ac1("Sandeep", 123456, 500000000000);
	Account ac2("Sachin", 12345);
	Account ac3("God");
	ac1.print_details();
	ac2.print_details();
	ac3.print_details();
	return 0;
}
/*
line 11, Account() is a constructor with no return type and name is same as class name and also no type of arg in formal arg list can be done only to constructor.
So here, the fn call for Account() is done by compiler automatically.
And when the object is created, then the value for data members will be initialized to those values present in constructor defn.
in line 26, we must pass the arg along with the defn of the object.
So ac1 will get the members data through the arguments passed.
line 26, 27, 28 is working like constructor polymorphism only.
But I cannot give only accno there, order of arg matters.
1st arg for string only, second one for accno and then for bal.
If i give 2arg, it means i am skipping the 3rd one only, i can't skip 2nd arg.
So we go for constructor overloading which got different arg types and different number of args with same name(so only constructor name)
*/
