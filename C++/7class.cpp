#include<iostream>
using namespace std;
class Account
{
	string Name;
	long unsigned accNumber;
	float balance;
	public:
	Account(string name, long unsigned int ac_num, float bal);
	Account(long unsigned int ac_num, float bal); //2nd decln of constructor.
	void print_details(void);
};
void Account::print_details()
{
	cout << "Account name is " << Name << endl;
	cout << "Account balance is " << balance << endl;
	cout << "Account number is " << accNumber << endl;
}
Account::Account(string name = "Nobody", long unsigned int ac_num = 0, float bal = 0)
{
	Name = name;
	accNumber = ac_num;
	balance = bal;
}
Account::Account(long unsigned int ac_num, float bal)
{
	accNumber = ac_num;
	balance = bal;
}
int main()
{
	Account ac1("Sandeep", 12345, 50000000000);
	Account ac2("Sachin", 12346, 500000000);
	Account ac3;
	Account ac4(12344, 20);
	ac1.print_details();
	ac2.print_details();
	ac3.print_details();
	ac4.print_details();  //here i got null string as no name stored
	//Nothing present in string...no gv and all.
	string str;
	cout << "Length of str = " << str.length() << endl; //0 bcoz no gv nothing.
	return 0;
}
/*
As said order of arg matters, so we go for 1 more defn of constructor where i can 1st give acc no, or 1st balance, like this option if i need, then i go for multiple defns of constructors(constructors overloading).  
constructors decln also done for 2nd defn of constructor. */
