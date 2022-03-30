#include<iostream>
using namespace std;
int main()
{
	string str("Hello");  //string str = "Hello" both same.
	cout << "Length of str " << str.length() << endl; //length of string prints.
	char arr[6];
	string str2 = str; //copy of str to str2 string.
	str.copy(arr, 5);  //str to char array copy 5 characters.
	for ( int i = 0; i < str.length(); i++ )
	{
		cout << str.at(i) << endl;
		cout << str[i] << endl;
		//above both prints same, character by character access
	}
	for ( auto i = str.rbegin(); i != str.rend(); i++ ) //i is automatic var.
	{
		cout << *i << endl;
	}
	string s = "HelloWorld";
	cout << str.compare(s) << endl;
	cout << s.substr(0, 5) << endl;
	cout << s.substr(5,10) << endl;  //prints World
	cout << "Size of string : " << sizeof(string) << endl;
	//constant 32 bytes always.
    return 0;
}
/*
  str.begin() returns the address of 1st char, here 'H'
  So i became a character pointer now.
  str.end() is address of last character.
  str.rbegin() returns address of last character, and goes backward addresses with rend() having starting address.
Above is used to print string in reverse order.
str.compare(s) is comparing str and s string and returns value same as c lang str.cmp().
s.substr(0, 5) means to get string from 0th index till 5th index (excluding 5th index) - here we get Hello.
s.substr(5, 10) means World '\0' excluded.
*/
