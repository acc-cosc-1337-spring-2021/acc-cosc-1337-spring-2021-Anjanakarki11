//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen

#include <iostream>
using std::cin;
using std::cout;

int main()
{

	int num;
	int num1 = 4;
	int result;
	cout << "Please enter an integer value: ";
	cin >> num1;
	result = multiply_numbers(num);
	cout <<"The result is: "<<result;
	result = multiply_numbers(num1);
	cout <<"The new value is: "<<result;
	return 0;
}

