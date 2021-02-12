//write include statements
#include<iostream>
#include "variables.h"

//write namespace using statement for cout
using std:: cin;
using std:: cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tax_amount;
	double tip_amount;
	double total;
	cout<<"Please enter an meal amount: ";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	
	cout<<"How much are you tip to the waiter (tip rate): ";
	cin>>tip_rate, cout<<"%";
	tip_rate = tip_rate / 100;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	cout<< "\n Where is your receipt!"<<"\nMeal_Amount: $"<<meal_amount<<"\nSales Tax: $"<<tax_amount<<"\nTip Amount: $"<<tip_amount<<"\nTotal: $"<<total;





	return 0;
}
