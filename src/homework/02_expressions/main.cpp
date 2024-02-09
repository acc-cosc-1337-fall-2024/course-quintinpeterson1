//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;


int main()
{
	double meal_amount = 0;
	cout<<"Enter the cost of the meal.";
	cin>>meal_amount;

	double tip_rate = 0;
	cout<<"Enter the tip percentage.";
	cin>>tip_rate;

	double tip_amount = 0;
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	double tax_amount = 0;
	tax_amount = get_sales_tax_amount(meal_amount);

	double total = 0;
	total = tip_amount + tax_amount + meal_amount;
	
	double sales_tax = meal_amount*tax_rate;

	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<sales_tax<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";


	return 0;
}
