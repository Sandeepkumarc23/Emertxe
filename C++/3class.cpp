#include<iostream>
using namespace std;
class Account
{
	int AccountNum;
	int balance;
	string Name;
	public:
	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}
};
struct S_Account
{
	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}
	private:  //here by default public so have to use private keyword to make it private, and vice versa for class.
	int AccountNum;
	int balance;
	string Name;
};
int main()
{
	Account ac1;
	S_Account ac2;
	ac1.setName("Sandy");
	ac2.setName("Messi");
	cout << "size of string: " << sizeof(string) << endl;
	cout << "Name = " << ac1.getName() << endl;
	cout << "Name = " << ac2.getName() << endl;
	cout << "size of class " << sizeof(ac1) << endl;
    cout << "Size of struct " << sizeof(ac2) << endl;
	return 0;
}
/* size of structure and class is same and it is 40 bytes, bcoz memory for fn is allocated separately.
   So here memory of data members together form structure and class memory.
   Structure padding is same in class as well...
   */
