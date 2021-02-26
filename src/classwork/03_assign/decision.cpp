//cpp
#include "decision.h"

std::string get_letter_grade_using_if(int grade)
{
    std::string letter_grade;
    

    if (grade >= 90 && grade <= 100)
    {
        letter_grade = "A";
    }
    else if(grade >=80 && grade <= 89)
    {
        letter_grade = "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        letter_grade = "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        letter_grade = "D";
    }
    else if (grade >= 0 && grade <= 59)
    {
        letter_grade = "F";
    
    }
    else
    {
        letter_grade = "Out of range";
    }
    return letter_grade;
    
}