//write include statements
#include <iostream>
#include "decisions.h"
#include <string>
using namespace std;




int main() 
{
	string result = " ";
	string option = " ";

	cout<<"MAIN MENU\n";

	int grade = 0;
	cout<<"Enter number grade.\n";
	cin>>grade;
	result = get_letter_grade_using_if(grade);
	option = get_letter_grade_using_switch(grade);

	cout<<"Letter number using if: "<<result<<"\n";
	cout<<"Letter number using switch: "<<option<<"\n";





	return 0;
}