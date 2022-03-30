#include<iostream>
using namespace std;
template <typename T>
class GenArray
{
	T *arr;
	int arr_size;
	public:
	GenArray(T *a, int size)
	{
		arr_size = size;
		arr = new T[arr_size];
		for ( int i = 0; i < arr_size; i++ )
			arr[i] = a[i]; //copying into object arr.
	}
	void display_array()
	{
		for ( int i = 0; i < arr_size; i++ )
			cout << arr[i] << " ";
		cout << "\n";
	}
	T max()
	{
		T m = arr[0];
		for (int i = 1; i < arr_size; i++ )
		{
			if ( arr[i] > m )
				m = arr[i];
		}
		return m;
	}
	T min()
	{
		T m = arr[0];
		for (int i = 1; i < arr_size; i++ )
		{
			if ( arr[i] < m )
				m = arr[i];
		}
		return m;
	}
};
int main()
{
	int array[5] = {3,5,9,2,8};
	double array1[3] = {1.2, 3.4, 5.7};
	GenArray <int>int_arr(array, 5);
	int_arr.display_array();
	GenArray <double>double_arr(array1, 3);
	double_arr.display_array();
	cout << "Max value of array is " << int_arr.max() << endl;
	cout << "Min value of array is " << int_arr.min() << endl;
	cout << "Max value of array is " << double_arr.max() << endl;
	cout << "Min value of array is " << double_arr.min() << endl;
	return 0;
}
/*
line 27 - int_arr is object of GenArray class and "<int>" has to be given to tell the class that it is of int type. So wherever T is there in class, will be considered as int.
I am copying array elements from main() to an object of 2 different datatypes.
GenArray is a generic class used by objects of different datatypes.
line 24 - 40, is to print min and max value of any type of array.
*/
