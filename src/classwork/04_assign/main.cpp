//write includes statements
#include"loops.h"
#include<iostream>
//write using statements for cin and cout

using std::cout;
using std::cin;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	char continue_ = 'y';
	do
	{
		cout<<"Enter the number with minimum 1 and maximum 10: \n";
		bool make_sure_it_works = false;
		//int fact = 1;
    	//int index = 1;


      
		while(make_sure_it_works == false)
		{
			cout<<"Number is: ";cin>>num;
			if(num>= 1 && num<=10)
			{
				make_sure_it_works = true;
			}
			else
			{
				cout<<" make sure the number is minimum 1 and maximum 10\n";
				cout<<"Do you try again: \n";

			}
		}
		int new_num = factorial(num);
		cout<<"The factorial is: "<<new_num<<"\n";
		cout<<"\n Do you want to continue (y/n)?: ";
		cin>>continue_;

		
	} 
	
	while (continue_ == 'y' || continue_ == 'Y');
	

	return 0;
}