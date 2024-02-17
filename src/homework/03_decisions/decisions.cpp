//write include statement for decisions header
#include "decisions.h"
#include <iostream>


using std::string;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    // Define result
    string result = " ";

    // If statements to convert number grade into letter grade
    if (grade >= 0 and grade < 60) {

        
        result = "F";

    }

    else if (grade >= 60 and grade < 70) {

        result = "D";

    }

    else if (grade >= 70 and grade < 80) {

        result = "C";

    }

    else if (grade >= 80 and grade < 90) {

        result = "B";

    }

    else if (grade >= 90 and grade < 101) {

        result = "A";

    }

    else {
        result = "Number is not in range.";
    }
 

    return result;

}


string get_letter_grade_using_switch(int grade)
{
    // Define option
    string option = " ";

    
    
    switch(grade / 10) {

        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            option = 'F';
            break;

        case 6:
            option = 'D';
            break;    

        case 7:
            option = 'C';
            break;

        case 8:
            option = 'B';
            break;

        case 9:
        option = 'A';
            break;
        case 10:
            if (grade == 100) {
                return "A";
            }

        
    default:
        option = "Number not in range.";
        break;
    }





    return option;
}