/* My first C++ program. */
#include <iostream>
using namespace std;  //means i want to use everything in namespace without std:: here, just to simplify things...
int main()
{
	int var;
	float f;
	char c;
	string str;  //string is a datatype in c++
	cout << "Enter a integer, float, char and string\n";
	cin >> var >> f >> c >> str;  //reading for all values, int, char float and string at once...
	//cout << "value of var = " << var << "\n";  //To print var value "<< val"
	cout << "value of var = " << var << endl << "value of float = " << f << endl << "Value of character = " << c << endl << "Value of string = " << str << endl;  //endl means end of line or new line.
	cout << "Hello World\n"; //to print anything on screen
	return 0;
}

/*
   iostream header file got std namespace in it.
   To use inbuilt objects we have to use namespace called std and then ::  , else we will get error.
   :: is a operator to get a object from the namespace, here from std...
	// << means left shift, and we made this << operator also to be used as indirection..Here it is not appending, it is indirection.
	//We can add any feature to any operator.
	3rd line using means whenever cout is used no need of giving std::cout
	cout and cin is present in std namespace and std namespace is in iostream.
	No .h in header file extn, just to differentiate between c and c++ header files.
	As u can see commenting way is same as c.
	"using" is a keyword to include namespace only.
   */
