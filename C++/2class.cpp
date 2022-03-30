#include<iostream>
using namespace std;
class EmployeeInfo
{
	string name;
	string address;
	int id;
	public:
	void get_data(void)
	{
		cout << "Enter the name, address and id respectively:\n";
	    cin >> name >> address >> id;
	}	
	void print_data(void)
	{
		print_id();
		print_name();
		print_address();
	}
	private:
	void print_id(void)
	{
		cout << "The ID is: " << id << endl;
	}
	void print_name(void)
	{
		cout << "The name is: " << name << endl;
	}
	void print_address(void)
	{
		cout << "The address is: " << address << endl;
	}
};
int main()
{
	EmployeeInfo emp1;
	emp1.get_data();
	emp1.print_data(); //Here i am calling public fn of class which inturn will call private fns of class, so no error..
	return 0;
}
