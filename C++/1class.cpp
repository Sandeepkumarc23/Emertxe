//On private class
#include<iostream>
using namespace std;
class EmployeeInfo  //by default private class...
{
	      int id;
	      string name, address;
	public:
	      void get_data(void)
	      {
		        cout << "Enter ID No: "; cin >> id;
		        cout << "Enter Name: "; cin >> name;
		        cout << "Enter Address: "; cin >> address;
	       }
	       void print_data(void)
           {
		      cout << "The ID is: " << id << endl;
		      cout << "The Name is: " << name << endl;
		      cout << "The address is: " << address << endl;
	       }
};
int main()
{
	EmployeeInfo emp1;
	emp1.get_data();
	emp1.print_data();
	return 0;
}
/* This gives error bcoz data members and fns cannot be used outside the class. But this is of no use..
So we go like elements keeping private and fns public.
This is done in line number 8, so from line 8 till 19 all are public
But still here data members i.e till line 7 all are private.
 */

